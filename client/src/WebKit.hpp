/*
 * WebKit.hpp
# ------------------------------------------------------------------------ #
# Copyright (c) 2010-2014 Rodrigue Chakode (rodrigue.chakode@gmail.com)    #
# Last Update : 23-03-2014                                                 #
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

#ifndef SNAVWEBKIT_H_
#define SNAVWEBKIT_H_

#include "Base.hpp"
#include <QtWebKit/QtWebKit>

#if QT_VERSION >= QT_VERSION_CHECK(5,0,0)
#   include <QtWebKitWidgets>
#endif


class QNetworkReply;
class WebKit : public QWebView
{
  Q_OBJECT

public:
  WebKit(const QString& = "http://realopinsight.com/en/index.php?page=contribute", QWidget* = 0);
  virtual ~WebKit() ;

public Q_SLOTS:
  void setUrl(const QString& url);
  void handleLoadFinished(bool ok);
  void handleAuthenticationRequired(QNetworkReply*, QAuthenticator* authenticator);

private:
  QString m_urlpath;
  void addEvents(void);
};

#endif /* SNAVWEBKIT_H_ */
