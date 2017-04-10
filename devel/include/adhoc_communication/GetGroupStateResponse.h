// Generated by gencpp from file adhoc_communication/GetGroupStateResponse.msg
// DO NOT EDIT!


#ifndef ADHOC_COMMUNICATION_MESSAGE_GETGROUPSTATERESPONSE_H
#define ADHOC_COMMUNICATION_MESSAGE_GETGROUPSTATERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace adhoc_communication
{
template <class ContainerAllocator>
struct GetGroupStateResponse_
{
  typedef GetGroupStateResponse_<ContainerAllocator> Type;

  GetGroupStateResponse_()
    : member(false)
    , activated(false)
    , connected(false)
    , root(false)
    , joining(false)
    , route_uplink()
    , downlinks()  {
    }
  GetGroupStateResponse_(const ContainerAllocator& _alloc)
    : member(false)
    , activated(false)
    , connected(false)
    , root(false)
    , joining(false)
    , route_uplink(_alloc)
    , downlinks(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _member_type;
  _member_type member;

   typedef uint8_t _activated_type;
  _activated_type activated;

   typedef uint8_t _connected_type;
  _connected_type connected;

   typedef uint8_t _root_type;
  _root_type root;

   typedef uint8_t _joining_type;
  _joining_type joining;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _route_uplink_type;
  _route_uplink_type route_uplink;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _downlinks_type;
  _downlinks_type downlinks;




  typedef boost::shared_ptr< ::adhoc_communication::GetGroupStateResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::adhoc_communication::GetGroupStateResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetGroupStateResponse_

typedef ::adhoc_communication::GetGroupStateResponse_<std::allocator<void> > GetGroupStateResponse;

typedef boost::shared_ptr< ::adhoc_communication::GetGroupStateResponse > GetGroupStateResponsePtr;
typedef boost::shared_ptr< ::adhoc_communication::GetGroupStateResponse const> GetGroupStateResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::adhoc_communication::GetGroupStateResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::adhoc_communication::GetGroupStateResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace adhoc_communication

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'adhoc_communication': ['/home/fabrizio/ros_indigo_external/src/aau_multi_robot/adhoc_communication/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::adhoc_communication::GetGroupStateResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::adhoc_communication::GetGroupStateResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::adhoc_communication::GetGroupStateResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::adhoc_communication::GetGroupStateResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::adhoc_communication::GetGroupStateResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::adhoc_communication::GetGroupStateResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::adhoc_communication::GetGroupStateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a60c9124520fea5a021262dcbe436318";
  }

  static const char* value(const ::adhoc_communication::GetGroupStateResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa60c9124520fea5aULL;
  static const uint64_t static_value2 = 0x021262dcbe436318ULL;
};

template<class ContainerAllocator>
struct DataType< ::adhoc_communication::GetGroupStateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "adhoc_communication/GetGroupStateResponse";
  }

  static const char* value(const ::adhoc_communication::GetGroupStateResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::adhoc_communication::GetGroupStateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool member\n\
bool activated\n\
bool connected\n\
bool root\n\
bool joining\n\
string route_uplink\n\
string[] downlinks\n\
\n\
";
  }

  static const char* value(const ::adhoc_communication::GetGroupStateResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::adhoc_communication::GetGroupStateResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.member);
      stream.next(m.activated);
      stream.next(m.connected);
      stream.next(m.root);
      stream.next(m.joining);
      stream.next(m.route_uplink);
      stream.next(m.downlinks);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetGroupStateResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::adhoc_communication::GetGroupStateResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::adhoc_communication::GetGroupStateResponse_<ContainerAllocator>& v)
  {
    s << indent << "member: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.member);
    s << indent << "activated: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.activated);
    s << indent << "connected: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.connected);
    s << indent << "root: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.root);
    s << indent << "joining: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.joining);
    s << indent << "route_uplink: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.route_uplink);
    s << indent << "downlinks[]" << std::endl;
    for (size_t i = 0; i < v.downlinks.size(); ++i)
    {
      s << indent << "  downlinks[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.downlinks[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ADHOC_COMMUNICATION_MESSAGE_GETGROUPSTATERESPONSE_H