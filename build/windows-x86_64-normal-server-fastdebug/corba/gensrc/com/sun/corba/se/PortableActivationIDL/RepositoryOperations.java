package com.sun.corba.se.PortableActivationIDL;


/**
* com/sun/corba/se/PortableActivationIDL/RepositoryOperations.java .
* 由IDL-to-Java 编译器 (可移植), 版本 "3.2"生成
* 从d:/xysziv/openjdk/corba/src/share/classes/com/sun/corba/se/PortableActivationIDL/activation.idl
* 2021年6月2日 星期三 下午10时51分19秒 CST
*/

public interface RepositoryOperations 
{

  /** register server definition.
	* This returns the serverId of the server.  A newly created server is
	* always uninstalled.
	*/
  String registerServer (com.sun.corba.se.PortableActivationIDL.RepositoryPackage.ServerDef serverDef) throws com.sun.corba.se.PortableActivationIDL.ServerAlreadyRegistered, com.sun.corba.se.PortableActivationIDL.BadServerDefinition;

  /** unregister server definition
	*/
  void unregisterServer (String serverId) throws com.sun.corba.se.PortableActivationIDL.ServerNotRegistered;

  /** get server definition
	*/
  com.sun.corba.se.PortableActivationIDL.RepositoryPackage.ServerDef getServer (String serverId) throws com.sun.corba.se.PortableActivationIDL.ServerNotRegistered;

  /** Return whether the server has been installed
	*/
  boolean isInstalled (String serverId) throws com.sun.corba.se.PortableActivationIDL.ServerNotRegistered;

  /** Mark the server as being installed.  Raises ServerAlreadyInstalled
	* if the server is currently marked as installed.
	*/
  void install (String serverId) throws com.sun.corba.se.PortableActivationIDL.ServerNotRegistered, com.sun.corba.se.PortableActivationIDL.ServerAlreadyInstalled;

  /** Mark the server as being uninstalled.  Raises ServerAlreadyUninstalled
	* if the server is currently marked as uninstalled.
	*/
  void uninstall (String serverId) throws com.sun.corba.se.PortableActivationIDL.ServerNotRegistered, com.sun.corba.se.PortableActivationIDL.ServerAlreadyUninstalled;

  /** list registered servers
	*/
  String[] listRegisteredServers ();

  /** Returns list of ALL applicationNames defined in ServerDefs of registered 
	* servers.
	*/
  String[] getApplicationNames ();

  /** Find the ServerID associated with the given application name.
	*/
  String getServerID (String applicationName) throws com.sun.corba.se.PortableActivationIDL.ServerNotRegistered;
} // interface RepositoryOperations
