// Generated by gencpp from file map_merger/LogMapsRequest.msg
// DO NOT EDIT!


#ifndef MAP_MERGER_MESSAGE_LOGMAPSREQUEST_H
#define MAP_MERGER_MESSAGE_LOGMAPSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace map_merger
{
template <class ContainerAllocator>
struct LogMapsRequest_
{
  typedef LogMapsRequest_<ContainerAllocator> Type;

  LogMapsRequest_()
    : log(0)  {
    }
  LogMapsRequest_(const ContainerAllocator& _alloc)
    : log(0)  {
  (void)_alloc;
    }



   typedef uint16_t _log_type;
  _log_type log;




  typedef boost::shared_ptr< ::map_merger::LogMapsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::map_merger::LogMapsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct LogMapsRequest_

typedef ::map_merger::LogMapsRequest_<std::allocator<void> > LogMapsRequest;

typedef boost::shared_ptr< ::map_merger::LogMapsRequest > LogMapsRequestPtr;
typedef boost::shared_ptr< ::map_merger::LogMapsRequest const> LogMapsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::map_merger::LogMapsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::map_merger::LogMapsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace map_merger

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'adhoc_communication': ['/home/fabrizio/ros_indigo_external/src/aau_multi_robot/adhoc_communication/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::map_merger::LogMapsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::map_merger::LogMapsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_merger::LogMapsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_merger::LogMapsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_merger::LogMapsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_merger::LogMapsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::map_merger::LogMapsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bb54d185c1070cbf70d4cfb2996c18fd";
  }

  static const char* value(const ::map_merger::LogMapsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbb54d185c1070cbfULL;
  static const uint64_t static_value2 = 0x70d4cfb2996c18fdULL;
};

template<class ContainerAllocator>
struct DataType< ::map_merger::LogMapsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "map_merger/LogMapsRequest";
  }

  static const char* value(const ::map_merger::LogMapsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::map_merger::LogMapsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint16 log\n\
";
  }

  static const char* value(const ::map_merger::LogMapsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::map_merger::LogMapsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.log);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LogMapsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::map_merger::LogMapsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::map_merger::LogMapsRequest_<ContainerAllocator>& v)
  {
    s << indent << "log: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.log);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAP_MERGER_MESSAGE_LOGMAPSREQUEST_H
