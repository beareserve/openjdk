package org.omg.DynamicAny;


/**
* org/omg/DynamicAny/DynValueCommonOperations.java .
* 由IDL-to-Java 编译器 (可移植), 版本 "3.2"生成
* 从d:/xysziv/openjdk/corba/src/share/classes/org/omg/DynamicAny/DynamicAny.idl
* 2021年6月2日 星期三 下午10时51分19秒 CST
*/


/**
    * DynValueCommon provides operations supported by both the DynValue and DynValueBox interfaces.
    */
public interface DynValueCommonOperations  extends org.omg.DynamicAny.DynAnyOperations
{

  /**
        * Returns true if the DynValueCommon represents a null value type.
        */
  boolean is_null ();

  /**
        * Changes the representation of a DynValueCommon to a null value type.
        */
  void set_to_null ();

  /**
        * Replaces a null value type with a newly constructed value. Its components are initialized
        * to default values as in DynAnyFactory.create_dyn_any_from_type_code.
        * If the DynValueCommon represents a non-null value type, then this operation has no effect. 
        */
  void set_to_value ();
} // interface DynValueCommonOperations
