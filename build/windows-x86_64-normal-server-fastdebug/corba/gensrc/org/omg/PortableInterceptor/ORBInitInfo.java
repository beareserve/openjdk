package org.omg.PortableInterceptor;


/**
* org/omg/PortableInterceptor/ORBInitInfo.java .
* 由IDL-to-Java 编译器 (可移植), 版本 "3.2"生成
* 从d:/xysziv/openjdk/corba/src/share/classes/org/omg/PortableInterceptor/Interceptors.idl
* 2021年6月2日 星期三 下午10时51分20秒 CST
*/


/** 
   * Passed to each <code>ORBInitializer</code>, allowing it to
   * to register interceptors and perform other duties while the ORB is 
   * initializing.
   * <p>
   * The <code>ORBInitInfo</code> object is only valid during 
   * <code>ORB.init</code>.  If a service keeps a reference to its 
   * <code>ORBInitInfo</code> object and tries to use it after 
   * <code>ORB.init</code> returns, the object no longer exists and an 
   * <code>OBJECT_NOT_EXIST</code> exception shall be thrown.
   *
   * @see ORBInitializer
   */
public interface ORBInitInfo extends ORBInitInfoOperations, org.omg.CORBA.Object, org.omg.CORBA.portable.IDLEntity 
{
} // interface ORBInitInfo
