// Generated by gencpp from file adhoc_communication/GetGroupStateRequest.msg
// DO NOT EDIT!


#ifndef ADHOC_COMMUNICATION_MESSAGE_GETGROUPSTATEREQUEST_H
#define ADHOC_COMMUNICATION_MESSAGE_GETGROUPSTATEREQUEST_H


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
struct GetGroupStateRequest_
{
  typedef GetGroupStateRequest_<ContainerAllocator> Type;

  GetGroupStateRequest_()
    : group_name()  {
    }
  GetGroupStateRequest_(const ContainerAllocator& _alloc)
    : group_name(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _group_name_type;
  _group_name_type group_name;




  typedef boost::shared_ptr< ::adhoc_communication::GetGroupStateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::adhoc_communication::GetGroupStateRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetGroupStateRequest_

typedef ::adhoc_communication::GetGroupStateRequest_<std::allocator<void> > GetGroupStateRequest;

typedef boost::shared_ptr< ::adhoc_communication::GetGroupStateRequest > GetGroupStateRequestPtr;
typedef boost::shared_ptr< ::adhoc_communication::GetGroupStateRequest const> GetGroupStateRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::adhoc_communication::GetGroupStateRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::adhoc_communication::GetGroupStateRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::adhoc_communication::GetGroupStateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::adhoc_communication::GetGroupStateRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::adhoc_communication::GetGroupStateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::adhoc_communication::GetGroupStateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::adhoc_communication::GetGroupStateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::adhoc_communication::GetGroupStateRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::adhoc_communication::GetGroupStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "967d0b0c0d858ded8a6a69abbce0c981";
  }

  static const char* value(const ::adhoc_communication::GetGroupStateRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x967d0b0c0d858dedULL;
  static const uint64_t static_value2 = 0x8a6a69abbce0c981ULL;
};

template<class ContainerAllocator>
struct DataType< ::adhoc_communication::GetGroupStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "adhoc_communication/GetGroupStateRequest";
  }

  static const char* value(const ::adhoc_communication::GetGroupStateRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::adhoc_communication::GetGroupStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string group_name\n\
";
  }

  static const char* value(const ::adhoc_communication::GetGroupStateRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::adhoc_communication::GetGroupStateRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.group_name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetGroupStateRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::adhoc_communication::GetGroupStateRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::adhoc_communication::GetGroupStateRequest_<ContainerAllocator>& v)
  {
    s << indent << "group_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.group_name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ADHOC_COMMUNICATION_MESSAGE_GETGROUPSTATEREQUEST_H
