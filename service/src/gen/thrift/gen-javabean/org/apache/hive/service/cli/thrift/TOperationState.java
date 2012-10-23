/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package org.apache.hive.service.cli.thrift;


import java.util.Map;
import java.util.HashMap;
import org.apache.thrift.TEnum;

public enum TOperationState implements org.apache.thrift.TEnum {
  INITIALIZED_STATE(0),
  RUNNING_STATE(1),
  FINISHED_STATE(2),
  CANCELED_STATE(3),
  CLOSED_STATE(4),
  ERROR_STATE(5),
  UKNOWN_STATE(6);

  private final int value;

  private TOperationState(int value) {
    this.value = value;
  }

  /**
   * Get the integer value of this enum value, as defined in the Thrift IDL.
   */
  public int getValue() {
    return value;
  }

  /**
   * Find a the enum type by its integer value, as defined in the Thrift IDL.
   * @return null if the value is not found.
   */
  public static TOperationState findByValue(int value) { 
    switch (value) {
      case 0:
        return INITIALIZED_STATE;
      case 1:
        return RUNNING_STATE;
      case 2:
        return FINISHED_STATE;
      case 3:
        return CANCELED_STATE;
      case 4:
        return CLOSED_STATE;
      case 5:
        return ERROR_STATE;
      case 6:
        return UKNOWN_STATE;
      default:
        return null;
    }
  }
}
