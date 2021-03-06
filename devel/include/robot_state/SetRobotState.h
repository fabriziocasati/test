// Generated by gencpp from file robot_state/SetRobotState.msg
// DO NOT EDIT!


#ifndef ROBOT_STATE_MESSAGE_SETROBOTSTATE_H
#define ROBOT_STATE_MESSAGE_SETROBOTSTATE_H

#include <ros/service_traits.h>


#include <robot_state/SetRobotStateRequest.h>
#include <robot_state/SetRobotStateResponse.h>


namespace robot_state
{

struct SetRobotState
{

typedef SetRobotStateRequest Request;
typedef SetRobotStateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetRobotState
} // namespace robot_state


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::robot_state::SetRobotState > {
  static const char* value()
  {
    return "bef0ae7d911622f50b16b03d5dfd28d9";
  }

  static const char* value(const ::robot_state::SetRobotState&) { return value(); }
};

template<>
struct DataType< ::robot_state::SetRobotState > {
  static const char* value()
  {
    return "robot_state/SetRobotState";
  }

  static const char* value(const ::robot_state::SetRobotState&) { return value(); }
};


// service_traits::MD5Sum< ::robot_state::SetRobotStateRequest> should match 
// service_traits::MD5Sum< ::robot_state::SetRobotState > 
template<>
struct MD5Sum< ::robot_state::SetRobotStateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::robot_state::SetRobotState >::value();
  }
  static const char* value(const ::robot_state::SetRobotStateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::robot_state::SetRobotStateRequest> should match 
// service_traits::DataType< ::robot_state::SetRobotState > 
template<>
struct DataType< ::robot_state::SetRobotStateRequest>
{
  static const char* value()
  {
    return DataType< ::robot_state::SetRobotState >::value();
  }
  static const char* value(const ::robot_state::SetRobotStateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::robot_state::SetRobotStateResponse> should match 
// service_traits::MD5Sum< ::robot_state::SetRobotState > 
template<>
struct MD5Sum< ::robot_state::SetRobotStateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::robot_state::SetRobotState >::value();
  }
  static const char* value(const ::robot_state::SetRobotStateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::robot_state::SetRobotStateResponse> should match 
// service_traits::DataType< ::robot_state::SetRobotState > 
template<>
struct DataType< ::robot_state::SetRobotStateResponse>
{
  static const char* value()
  {
    return DataType< ::robot_state::SetRobotState >::value();
  }
  static const char* value(const ::robot_state::SetRobotStateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOT_STATE_MESSAGE_SETROBOTSTATE_H
