package org.omg.PortableServer;


/**
* org/omg/PortableServer/AdapterActivator.java .
* 由IDL-to-Java 编译器 (可移植), 版本 "3.2"生成
* 从d:/xysziv/openjdk/corba/src/share/classes/org/omg/PortableServer/poa.idl
* 2021年6月2日 星期三 下午10时51分21秒 CST
*/


/**
	 * An adapter activator supplies a POA with the ability 
	 * to create child POAs on demand, as a side-effect of 
	 * receiving a request that names the child POA 
	 * (or one of its children), or when find_POA is called 
	 * with an activate parameter value of TRUE.
	 */
public interface AdapterActivator extends AdapterActivatorOperations, org.omg.CORBA.Object, org.omg.CORBA.portable.IDLEntity 
{
} // interface AdapterActivator
