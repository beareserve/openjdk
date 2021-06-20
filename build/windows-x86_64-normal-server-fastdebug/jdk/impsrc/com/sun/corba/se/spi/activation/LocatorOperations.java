package com.sun.corba.se.spi.activation;


/**
* com/sun/corba/se/spi/activation/LocatorOperations.java .
* 由IDL-to-Java 编译器 (可移植), 版本 "3.2"生成
* 从d:/xysziv/openjdk/corba/src/share/classes/com/sun/corba/se/spi/activation/activation.idl
* 2021年6月2日 星期三 下午10时51分19秒 CST
*/

public interface LocatorOperations 
{

  // Starts the server if it is not already running.
  com.sun.corba.se.spi.activation.LocatorPackage.ServerLocation locateServer (int serverId, String endPoint) throws com.sun.corba.se.spi.activation.NoSuchEndPoint, com.sun.corba.se.spi.activation.ServerNotRegistered, com.sun.corba.se.spi.activation.ServerHeldDown;

  // Starts the server if it is not already running.
  com.sun.corba.se.spi.activation.LocatorPackage.ServerLocationPerORB locateServerForORB (int serverId, String orbId) throws com.sun.corba.se.spi.activation.InvalidORBid, com.sun.corba.se.spi.activation.ServerNotRegistered, com.sun.corba.se.spi.activation.ServerHeldDown;

  // get the port for the endpoint of the locator
  int getEndpoint (String endPointType) throws com.sun.corba.se.spi.activation.NoSuchEndPoint;

  // to pick a particular port type.
  int getServerPortForType (com.sun.corba.se.spi.activation.LocatorPackage.ServerLocationPerORB location, String endPointType) throws com.sun.corba.se.spi.activation.NoSuchEndPoint;
} // interface LocatorOperations
