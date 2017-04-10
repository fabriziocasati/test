# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from adhoc_communication/MmListOfPoints.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import adhoc_communication.msg

class MmListOfPoints(genpy.Message):
  _md5sum = "e9cd3295535d71bbe517f47d6becc28b"
  _type = "adhoc_communication/MmListOfPoints"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """adhoc_communication/MmPoint[] positions

================================================================================
MSG: adhoc_communication/MmPoint
string src_robot
float64 x
float64 y
"""
  __slots__ = ['positions']
  _slot_types = ['adhoc_communication/MmPoint[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       positions

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MmListOfPoints, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.positions is None:
        self.positions = []
    else:
      self.positions = []

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
      length = len(self.positions)
      buff.write(_struct_I.pack(length))
      for val1 in self.positions:
        _x = val1.src_robot
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_struct_2d.pack(_x.x, _x.y))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.positions is None:
        self.positions = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.positions = []
      for i in range(0, length):
        val1 = adhoc_communication.msg.MmPoint()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.src_robot = str[start:end].decode('utf-8')
        else:
          val1.src_robot = str[start:end]
        _x = val1
        start = end
        end += 16
        (_x.x, _x.y,) = _struct_2d.unpack(str[start:end])
        self.positions.append(val1)
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
      length = len(self.positions)
      buff.write(_struct_I.pack(length))
      for val1 in self.positions:
        _x = val1.src_robot
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_struct_2d.pack(_x.x, _x.y))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.positions is None:
        self.positions = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.positions = []
      for i in range(0, length):
        val1 = adhoc_communication.msg.MmPoint()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.src_robot = str[start:end].decode('utf-8')
        else:
          val1.src_robot = str[start:end]
        _x = val1
        start = end
        end += 16
        (_x.x, _x.y,) = _struct_2d.unpack(str[start:end])
        self.positions.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_2d = struct.Struct("<2d")
