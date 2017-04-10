; Auto-generated. Do not edit!


(cl:in-package robot_state-srv)


;//! \htmlinclude LockRobotState-request.msg.html

(cl:defclass <LockRobotState-request> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass LockRobotState-request (<LockRobotState-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LockRobotState-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LockRobotState-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robot_state-srv:<LockRobotState-request> is deprecated: use robot_state-srv:LockRobotState-request instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LockRobotState-request>) ostream)
  "Serializes a message object of type '<LockRobotState-request>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LockRobotState-request>) istream)
  "Deserializes a message object of type '<LockRobotState-request>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LockRobotState-request>)))
  "Returns string type for a service object of type '<LockRobotState-request>"
  "robot_state/LockRobotStateRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LockRobotState-request)))
  "Returns string type for a service object of type 'LockRobotState-request"
  "robot_state/LockRobotStateRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LockRobotState-request>)))
  "Returns md5sum for a message object of type '<LockRobotState-request>"
  "95e696a0d10686913abb262e0b4cbbcf")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LockRobotState-request)))
  "Returns md5sum for a message object of type 'LockRobotState-request"
  "95e696a0d10686913abb262e0b4cbbcf")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LockRobotState-request>)))
  "Returns full string definition for message of type '<LockRobotState-request>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LockRobotState-request)))
  "Returns full string definition for message of type 'LockRobotState-request"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LockRobotState-request>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LockRobotState-request>))
  "Converts a ROS message object to a list"
  (cl:list 'LockRobotState-request
))
;//! \htmlinclude LockRobotState-response.msg.html

(cl:defclass <LockRobotState-response> (roslisp-msg-protocol:ros-message)
  ((succeeded
    :reader succeeded
    :initarg :succeeded
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass LockRobotState-response (<LockRobotState-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LockRobotState-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LockRobotState-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robot_state-srv:<LockRobotState-response> is deprecated: use robot_state-srv:LockRobotState-response instead.")))

(cl:ensure-generic-function 'succeeded-val :lambda-list '(m))
(cl:defmethod succeeded-val ((m <LockRobotState-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_state-srv:succeeded-val is deprecated.  Use robot_state-srv:succeeded instead.")
  (succeeded m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LockRobotState-response>) ostream)
  "Serializes a message object of type '<LockRobotState-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'succeeded) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LockRobotState-response>) istream)
  "Deserializes a message object of type '<LockRobotState-response>"
    (cl:setf (cl:slot-value msg 'succeeded) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LockRobotState-response>)))
  "Returns string type for a service object of type '<LockRobotState-response>"
  "robot_state/LockRobotStateResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LockRobotState-response)))
  "Returns string type for a service object of type 'LockRobotState-response"
  "robot_state/LockRobotStateResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LockRobotState-response>)))
  "Returns md5sum for a message object of type '<LockRobotState-response>"
  "95e696a0d10686913abb262e0b4cbbcf")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LockRobotState-response)))
  "Returns md5sum for a message object of type 'LockRobotState-response"
  "95e696a0d10686913abb262e0b4cbbcf")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LockRobotState-response>)))
  "Returns full string definition for message of type '<LockRobotState-response>"
  (cl:format cl:nil "bool succeeded~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LockRobotState-response)))
  "Returns full string definition for message of type 'LockRobotState-response"
  (cl:format cl:nil "bool succeeded~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LockRobotState-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LockRobotState-response>))
  "Converts a ROS message object to a list"
  (cl:list 'LockRobotState-response
    (cl:cons ':succeeded (succeeded msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'LockRobotState)))
  'LockRobotState-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'LockRobotState)))
  'LockRobotState-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LockRobotState)))
  "Returns string type for a service object of type '<LockRobotState>"
  "robot_state/LockRobotState")