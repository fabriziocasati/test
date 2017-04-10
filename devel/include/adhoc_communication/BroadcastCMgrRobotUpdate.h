// Generated by gencpp from file adhoc_communication/BroadcastCMgrRobotUpdate.msg
// DO NOT EDIT!


#ifndef ADHOC_COMMUNICATION_MESSAGE_BROADCASTCMGRROBOTUPDATE_H
#define ADHOC_COMMUNICATION_MESSAGE_BROADCASTCMGRROBOTUPDATE_H

#include <ros/service_traits.h>


#include <adhoc_communication/BroadcastCMgrRobotUpdateRequest.h>
#include <adhoc_communication/BroadcastCMgrRobotUpdateResponse.h>


namespace adhoc_communication
{

struct BroadcastCMgrRobotUpdate
{

typedef BroadcastCMgrRobotUpdateRequest Request;
typedef BroadcastCMgrRobotUpdateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct BroadcastCMgrRobotUpdate
} // namespace adhoc_communication


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::adhoc_communication::BroadcastCMgrRobotUpdate > {
  static const char* value()
  {
    return "4f803d834e6e3f0165ecc26babd1f3f1";
  }

  static const char* value(const ::adhoc_communication::BroadcastCMgrRobotUpdate&) { return value(); }
};

template<>
struct DataType< ::adhoc_communication::BroadcastCMgrRobotUpdate > {
  static const char* value()
  {
    return "adhoc_communication/BroadcastCMgrRobotUpdate";
  }

  static const char* value(const ::adhoc_communication::BroadcastCMgrRobotUpdate&) { return value(); }
};


// service_traits::MD5Sum< ::adhoc_communication::BroadcastCMgrRobotUpdateRequest> should match 
// service_traits::MD5Sum< ::adhoc_communication::BroadcastCMgrRobotUpdate > 
template<>
struct MD5Sum< ::adhoc_communication::BroadcastCMgrRobotUpdateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::adhoc_communication::BroadcastCMgrRobotUpdate >::value();
  }
  static const char* value(const ::adhoc_communication::BroadcastCMgrRobotUpdateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::adhoc_communication::BroadcastCMgrRobotUpdateRequest> should match 
// service_traits::DataType< ::adhoc_communication::BroadcastCMgrRobotUpdate > 
template<>
struct DataType< ::adhoc_communication::BroadcastCMgrRobotUpdateRequest>
{
  static const char* value()
  {
    return DataType< ::adhoc_communication::BroadcastCMgrRobotUpdate >::value();
  }
  static const char* value(const ::adhoc_communication::BroadcastCMgrRobotUpdateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::adhoc_communication::BroadcastCMgrRobotUpdateResponse> should match 
// service_traits::MD5Sum< ::adhoc_communication::BroadcastCMgrRobotUpdate > 
template<>
struct MD5Sum< ::adhoc_communication::BroadcastCMgrRobotUpdateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::adhoc_communication::BroadcastCMgrRobotUpdate >::value();
  }
  static const char* value(const ::adhoc_communication::BroadcastCMgrRobotUpdateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::adhoc_communication::BroadcastCMgrRobotUpdateResponse> should match 
// service_traits::DataType< ::adhoc_communication::BroadcastCMgrRobotUpdate > 
template<>
struct DataType< ::adhoc_communication::BroadcastCMgrRobotUpdateResponse>
{
  static const char* value()
  {
    return DataType< ::adhoc_communication::BroadcastCMgrRobotUpdate >::value();
  }
  static const char* value(const ::adhoc_communication::BroadcastCMgrRobotUpdateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ADHOC_COMMUNICATION_MESSAGE_BROADCASTCMGRROBOTUPDATE_H
