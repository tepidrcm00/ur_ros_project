// Generated by gencpp from file object_msgs/ObjectInfoRequest.msg
// DO NOT EDIT!


#ifndef OBJECT_MSGS_MESSAGE_OBJECTINFOREQUEST_H
#define OBJECT_MSGS_MESSAGE_OBJECTINFOREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace object_msgs
{
template <class ContainerAllocator>
struct ObjectInfoRequest_
{
  typedef ObjectInfoRequest_<ContainerAllocator> Type;

  ObjectInfoRequest_()
    : name()
    , get_geometry(false)  {
    }
  ObjectInfoRequest_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , get_geometry(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _name_type;
  _name_type name;

   typedef uint8_t _get_geometry_type;
  _get_geometry_type get_geometry;





  typedef boost::shared_ptr< ::object_msgs::ObjectInfoRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::object_msgs::ObjectInfoRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ObjectInfoRequest_

typedef ::object_msgs::ObjectInfoRequest_<std::allocator<void> > ObjectInfoRequest;

typedef boost::shared_ptr< ::object_msgs::ObjectInfoRequest > ObjectInfoRequestPtr;
typedef boost::shared_ptr< ::object_msgs::ObjectInfoRequest const> ObjectInfoRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::object_msgs::ObjectInfoRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::object_msgs::ObjectInfoRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::object_msgs::ObjectInfoRequest_<ContainerAllocator1> & lhs, const ::object_msgs::ObjectInfoRequest_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.get_geometry == rhs.get_geometry;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::object_msgs::ObjectInfoRequest_<ContainerAllocator1> & lhs, const ::object_msgs::ObjectInfoRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace object_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::object_msgs::ObjectInfoRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::object_msgs::ObjectInfoRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::object_msgs::ObjectInfoRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::object_msgs::ObjectInfoRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::object_msgs::ObjectInfoRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::object_msgs::ObjectInfoRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::object_msgs::ObjectInfoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1e9343217518c31b3fdbfdafad9f786b";
  }

  static const char* value(const ::object_msgs::ObjectInfoRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1e9343217518c31bULL;
  static const uint64_t static_value2 = 0x3fdbfdafad9f786bULL;
};

template<class ContainerAllocator>
struct DataType< ::object_msgs::ObjectInfoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "object_msgs/ObjectInfoRequest";
  }

  static const char* value(const ::object_msgs::ObjectInfoRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::object_msgs::ObjectInfoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# name of the object whose information is requested\n"
"string name\n"
"\n"
"# set to true if the Geometry should be returned\n"
"# with the Object as well. If false, then only\n"
"# the current object pose fields are returned\n"
"bool get_geometry\n"
"\n"
;
  }

  static const char* value(const ::object_msgs::ObjectInfoRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::object_msgs::ObjectInfoRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.get_geometry);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ObjectInfoRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::object_msgs::ObjectInfoRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::object_msgs::ObjectInfoRequest_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.name);
    s << indent << "get_geometry: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.get_geometry);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OBJECT_MSGS_MESSAGE_OBJECTINFOREQUEST_H
