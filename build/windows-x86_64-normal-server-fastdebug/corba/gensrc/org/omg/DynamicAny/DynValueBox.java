package org.omg.DynamicAny;


/**
* org/omg/DynamicAny/DynValueBox.java .
* 由IDL-to-Java 编译器 (可移植), 版本 "3.2"生成
* 从d:/xysziv/openjdk/corba/src/share/classes/org/omg/DynamicAny/DynamicAny.idl
* 2021年6月2日 星期三 下午10时51分19秒 CST
*/


/**
    * DynValueBox objects support the manipulation of IDL boxed value types.
    * The DynValueBox interface can represent both null and non-null value types.
    * For a DynValueBox representing a non-null value type, the DynValueBox has a single component
    * of the boxed type. A DynValueBox representing a null value type has no components
    * and a current position of -1.
    */
public interface DynValueBox extends DynValueBoxOperations, org.omg.DynamicAny.DynValueCommon, org.omg.CORBA.portable.IDLEntity 
{
} // interface DynValueBox
