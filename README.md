RealOpinsight is a business service monitoring toolkit that enables you to manage your IT while focusing on the services you provide. Working as add-on for existing monitoring systems, it provides specialized dashboard features and capabilities useful to monitor effectively the health of business applications and cloud services. RealOpinsight supports Nagios, Zenoss, Zabbix, Pandora FMS, Shinken, Centreon, Naemon, Icinga, op5, and more. 

RealOpInsight Workstation is released under the terms of GPLv3 License. See the LICENSE file.
 

INSTALLATION
=
This component needs to be installed on the user workstation.

Dependencies
==

- gcc-c++ >= 4.7
- Qt >= 4.7 (required modules : QtCore, QtGui, QtSvg, QtWebKit, QtXml, QtScript)
- libzmq (librairies and development files)
- graphviz
 
Installation
==

```
  $ tar zxf RealOpInsightX.Y.Y.tar.gz  # X.Y.Z refers to the version
  $ cd RealOpInsight-X.Y.Z
  $ sudo ./install-sh
```
