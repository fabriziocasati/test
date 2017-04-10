// Generated by gencpp from file adhoc_communication/GetNeighborsResponse.msg
// DO NOT EDIT!


#ifndef ADHOC_COMMUNICATION_MESSAGE_GETNEIGHBORSRESPONSE_H
#define ADHOC_COMMUNICATION_MESSAGE_GETNEIGHBORSRESPONSE_H


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
struct GetNeighborsResponse_
{
  typedef GetNeighborsResponse_<ContainerAllocator> Type;

  GetNeighborsResponse_()
    : neigbors()  {
    }
  GetNeighborsResponse_(const ContainerAllocator& _alloc)
    : neigbors(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _neigbors_type;
  _neigbors_type neigbors;




  typedef boost::shared_ptr< ::adhoc_communication::GetNeighborsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::adhoc_communication::GetNeighborsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetNeighborsResponse_

typedef ::adhoc_communication::GetNeighborsResponse_<std::allocator<void> > GetNeighborsResponse;

typedef boost::shared_ptr< ::adhoc_communication::GetNeighborsResponse > GetNeighborsResponsePtr;
typedef boost::shared_ptr< ::adhoc_communication::GetNeighborsResponse const> GetNeighborsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::adhoc_communication::GetNeighborsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::adhoc_communication::GetNeighborsResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::adhoc_communication::GetNeighborsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::adhoc_communication::GetNeighborsResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::adhoc_communication::GetNeighborsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::adhoc_communication::GetNeighborsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::adhoc_communication::GetNeighborsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::adhoc_communication::GetNeighborsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::adhoc_communication::GetNeighborsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a51be085cd4a0fb160e82a9e1952784d";
  }

  static const char* value(const ::adhoc_communication::GetNeighborsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa51be085cd4a0fb1ULL;
  static const uint64_t static_value2 = 0x60e82a9e1952784dULL;
};

template<class ContainerAllocator>
struct DataType< ::adhoc_communication::GetNeighborsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "adhoc_communication/GetNeighborsResponse";
  }

  static const char* value(const ::adhoc_communication::GetNeighborsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::adhoc_communication::GetNeighborsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] neigbors\n\
";
  }

  static const char* value(const ::adhoc_communication::GetNeighborsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::adhoc_communication::GetNeighborsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.neigbors);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetNeighborsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::adhoc_communication::GetNeighborsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::adhoc_communication::GetNeighborsResponse_<ContainerAllocator>& v)
  {
    s << indent << "neigbors[]" << std::endl;
    for (size_t i = 0; i < v.neigbors.size(); ++i)
    {
      s << indent << "  neigbors[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.neigbors[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ADHOC_COMMUNICATION_MESSAGE_GETNEIGHBORSRESPONSE_H
