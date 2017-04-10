// Generated by gencpp from file robot_state/UnlockRobotState.msg
// DO NOT EDIT!


#ifndef ROBOT_STATE_MESSAGE_UNLOCKROBOTSTATE_H
#define ROBOT_STATE_MESSAGE_UNLOCKROBOTSTATE_H

#include <ros/service_traits.h>


#include <robot_state/UnlockRobotStateRequest.h>
#include <robot_state/UnlockRobotStateResponse.h>


namespace robot_state
{

struct UnlockRobotState
{

typedef UnlockRobotStateRequest Request;
typedef UnlockRobotStateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct UnlockRobotState
} // namespace robot_state


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::robot_state::UnlockRobotState > {
  static const char* value()
  {
    return "95e696a0d10686913abb262e0b4cbbcf";
  }

  static const char* value(const ::robot_state::UnlockRobotState&) { return value(); }
};

template<>
struct DataType< ::robot_state::UnlockRobotState > {
  static const char* value()
  {
    return "robot_state/UnlockRobotState";
  }

  static const char* value(const ::robot_state::UnlockRobotState&) { return value(); }
};


// service_traits::MD5Sum< ::robot_state::UnlockRobotStateRequest> should match 
// service_traits::MD5Sum< ::robot_state::UnlockRobotState > 
template<>
struct MD5Sum< ::robot_state::UnlockRobotStateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::robot_state::UnlockRobotState >::value();
  }
  static const char* value(const ::robot_state::UnlockRobotStateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::robot_state::UnlockRobotStateRequest> should match 
// service_traits::DataType< ::robot_state::UnlockRobotState > 
template<>
struct DataType< ::robot_state::UnlockRobotStateRequest>
{
  static const char* value()
  {
    return DataType< ::robot_state::UnlockRobotState >::value();
  }
  static const char* value(const ::robot_state::UnlockRobotStateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::robot_state::UnlockRobotStateResponse> should match 
// service_traits::MD5Sum< ::robot_state::UnlockRobotState > 
template<>
struct MD5Sum< ::robot_state::UnlockRobotStateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::robot_state::UnlockRobotState >::value();
  }
  static const char* value(const ::robot_state::UnlockRobotStateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::robot_state::UnlockRobotStateResponse> should match 
// service_traits::DataType< ::robot_state::UnlockRobotState > 
template<>
struct DataType< ::robot_state::UnlockRobotStateResponse>
{
  static const char* value()
  {
    return DataType< ::robot_state::UnlockRobotState >::value();
  }
  static const char* value(const ::robot_state::UnlockRobotStateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOT_STATE_MESSAGE_UNLOCKROBOTSTATE_H
