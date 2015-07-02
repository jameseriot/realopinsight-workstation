/*
 * OpManagerHelper.hpp
# ------------------------------------------------------------------------ #
# Copyright (c) 2010-2014 Rodrigue Chakode (rodrigue.chakode@gmail.com)    #
# Last Update : 22-11-2014                                                 #
#                                                                          #
# This file is part of RealOpInsight (http://RealOpInsight.com) authored   #
# by Rodrigue Chakode <rodrigue.chakode@gmail.com>                         #
#                                                                          #
# RealOpInsight is free software: you can redistribute it and/or modify    #
# it under the terms of the GNU General Public License as published by     #
# the Free Software Foundation, either version 3 of the License, or        #
# (at your option) any later version.                                      #
#                                                                          #
# The Software is distributed in the hope that it will be useful,          #
# but WITHOUT ANY WARRANTY; without even the implied warranty of           #
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            #
# GNU General Public License for more details.                             #
#                                                                          #
# You should have received a copy of the GNU General Public License        #
# along with RealOpInsight.  If not, see <http://www.gnu.org/licenses/>.   #
#--------------------------------------------------------------------------#
 */

#ifndef OPMANAGERHELPERR_HPP_
#define OPMANAGERHELPERR_HPP_
#include "Base.hpp"
#include "JsonHelper.hpp"
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QSslConfiguration>


namespace {
  const QString OPMANAGER_API_CONTEXT = "/api/json/";
  }

class OpManagerHelper : public QNetworkAccessManager {
  Q_OBJECT
public:
  enum {
    GetDeviceByName = 0,
    GetDeviceByType = 1,
    GetDeviceByCategory = 2,
    GetDeviceAssociatedMonitors = 3
  };
  static const RequestListT ReqPatterns;

public:
  OpManagerHelper(const QString& baseUrl="http://localhost/");
  virtual ~OpManagerHelper();
  int
  loadChecks(const SourceT& srcInfo,  ChecksT& checks, int filterType, const QString& filter);
  int
  fetchAndAppendDeviceMonitors(const QString& deviceName, ChecksT& checks);
  QNetworkReply*
  postRequest(int reqId, const QStringList& params);
  void
  setBaseUrl(const QString& url);
  void
  setApiKey(const QString& key) {m_apiKey = key;}
  QString
  lastError(void) const {return m_lastError;}
  QString
  getApiEndpoint(void) const {return m_apiUri;}
  void
  setSslPeerVerification(bool verifyPeer);


public Q_SLOTS:
  void processError(const QNetworkReply::NetworkError& code) { m_evlHandler.exit(code);}

Q_SIGNALS:
  void propagateError(QNetworkReply::NetworkError);

private :
  static RequestListT requestsPatterns();
  QString m_apiUri;
  QString m_apiKey;
  QNetworkRequest m_reqHandler;
  QEventLoop m_evlHandler;
  QSslConfiguration m_sslConfig;
  QString m_lastError;
  QString m_replyData;

  void setSslReplyErrorHandlingOptions(QNetworkReply* reply);
  void processDevicesData(const QString& data, ChecksT& checks);
  void processMonitorsData(const QString& data, ChecksT& checks);
  std::string parseHostGroups(const QScriptValue& json);
  std::string parseHost(const QScriptValue& json);
};

#endif /* OPMANAGERHELPERR_HPP_ */