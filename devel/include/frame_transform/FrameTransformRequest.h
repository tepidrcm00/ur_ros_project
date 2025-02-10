// Generated by gencpp from file frame_transform/FrameTransformRequest.msg
// DO NOT EDIT!


#ifndef FRAME_TRANSFORM_MESSAGE_FRAMETRANSFORMREQUEST_H
#define FRAME_TRANSFORM_MESSAGE_FRAMETRANSFORMREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace frame_transform
{
template <class ContainerAllocator>
struct FrameTransformRequest_
{
  typedef FrameTransformRequest_<ContainerAllocator> Type;

  FrameTransformRequest_()
    : from_camera_to_base_link(false)  {
    }
  FrameTransformRequest_(const ContainerAllocator& _alloc)
    : from_camera_to_base_link(false)  {
  (void)_alloc;
    }



   typedef uint8_t _from_camera_to_base_link_type;
  _from_camera_to_base_link_type from_camera_to_base_link;





  typedef boost::shared_ptr< ::frame_transform::FrameTransformRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::frame_transform::FrameTransformRequest_<ContainerAllocator> const> ConstPtr;

}; // struct FrameTransformRequest_

typedef ::frame_transform::FrameTransformRequest_<std::allocator<void> > FrameTransformRequest;

typedef boost::shared_ptr< ::frame_transform::FrameTransformRequest > FrameTransformRequestPtr;
typedef boost::shared_ptr< ::frame_transform::FrameTransformRequest const> FrameTransformRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::frame_transform::FrameTransformRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::frame_transform::FrameTransformRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::frame_transform::FrameTransformRequest_<ContainerAllocator1> & lhs, const ::frame_transform::FrameTransformRequest_<ContainerAllocator2> & rhs)
{
  return lhs.from_camera_to_base_link == rhs.from_camera_to_base_link;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::frame_transform::FrameTransformRequest_<ContainerAllocator1> & lhs, const ::frame_transform::FrameTransformRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace frame_transform

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::frame_transform::FrameTransformRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::frame_transform::FrameTransformRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::frame_transform::FrameTransformRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::frame_transform::FrameTransformRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::frame_transform::FrameTransformRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::frame_transform::FrameTransformRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::frame_transform::FrameTransformRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2b803e7ecd898897f619a0902bc489b9";
  }

  static const char* value(const ::frame_transform::FrameTransformRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2b803e7ecd898897ULL;
  static const uint64_t static_value2 = 0xf619a0902bc489b9ULL;
};

template<class ContainerAllocator>
struct DataType< ::frame_transform::FrameTransformRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "frame_transform/FrameTransformRequest";
  }

  static const char* value(const ::frame_transform::FrameTransformRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::frame_transform::FrameTransformRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool from_camera_to_base_link\n"
;
  }

  static const char* value(const ::frame_transform::FrameTransformRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::frame_transform::FrameTransformRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.from_camera_to_base_link);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FrameTransformRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::frame_transform::FrameTransformRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::frame_transform::FrameTransformRequest_<ContainerAllocator>& v)
  {
    s << indent << "from_camera_to_base_link: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.from_camera_to_base_link);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FRAME_TRANSFORM_MESSAGE_FRAMETRANSFORMREQUEST_H
