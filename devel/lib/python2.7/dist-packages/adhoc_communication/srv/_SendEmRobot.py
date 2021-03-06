# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from adhoc_communication/SendEmRobotRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import adhoc_communication.msg

class SendEmRobotRequest(genpy.Message):
  _md5sum = "2d0d678adcd32e3dddaa117858e79f68"
  _type = "adhoc_communication/SendEmRobotRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """string topic
string dst_robot
adhoc_communication/EmRobot robot

================================================================================
MSG: adhoc_communication/EmRobot
int32 id
int32 state # see energy_mgmt/docking.h
int32 selected_ds #the id of the docking stationc currelty selected by the robot to recharge
float32 x    #robot x-coordinate (in the reference system of the sending robot, not in the one of the receiver)
float32 y    #robot y-coordinate (in the reference system of the sending robot, not in the one of the receiver)
"""
  __slots__ = ['topic','dst_robot','robot']
  _slot_types = ['string','string','adhoc_communication/EmRobot']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       topic,dst_robot,robot

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SendEmRobotRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.topic is None:
        self.topic = ''
      if self.dst_robot is None:
        self.dst_robot = ''
      if self.robot is None:
        self.robot = adhoc_communication.msg.EmRobot()
    else:
      self.topic = ''
      self.dst_robot = ''
      self.robot = adhoc_communication.msg.EmRobot()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.topic
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.dst_robot
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_3i2f.pack(_x.robot.id, _x.robot.state, _x.robot.selected_ds, _x.robot.x, _x.robot.y))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.robot is None:
        self.robot = adhoc_communication.msg.EmRobot()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.topic = str[start:end].decode('utf-8')
      else:
        self.topic = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.dst_robot = str[start:end].decode('utf-8')
      else:
        self.dst_robot = str[start:end]
      _x = self
      start = end
      end += 20
      (_x.robot.id, _x.robot.state, _x.robot.selected_ds, _x.robot.x, _x.robot.y,) = _struct_3i2f.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.topic
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.dst_robot
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_3i2f.pack(_x.robot.id, _x.robot.state, _x.robot.selected_ds, _x.robot.x, _x.robot.y))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.robot is None:
        self.robot = adhoc_communication.msg.EmRobot()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.topic = str[start:end].decode('utf-8')
      else:
        self.topic = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.dst_robot = str[start:end].decode('utf-8')
      else:
        self.dst_robot = str[start:end]
      _x = self
      start = end
      end += 20
      (_x.robot.id, _x.robot.state, _x.robot.selected_ds, _x.robot.x, _x.robot.y,) = _struct_3i2f.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_3i2f = struct.Struct("<3i2f")
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from adhoc_communication/SendEmRobotResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class SendEmRobotResponse(genpy.Message):
  _md5sum = "284aa12dd9e9e760802ac9f38036ea5e"
  _type = "adhoc_communication/SendEmRobotResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """uint8 status

"""
  __slots__ = ['status']
  _slot_types = ['uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       status

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SendEmRobotResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.status is None:
        self.status = 0
    else:
      self.status = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      buff.write(_struct_B.pack(self.status))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 1
      (self.status,) = _struct_B.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      buff.write(_struct_B.pack(self.status))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 1
      (self.status,) = _struct_B.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_B = struct.Struct("<B")
class SendEmRobot(object):
  _type          = 'adhoc_communication/SendEmRobot'
  _md5sum = '3d9be68bdd2f929d348378e69f0dc7c2'
  _request_class  = SendEmRobotRequest
  _response_class = SendEmRobotResponse
