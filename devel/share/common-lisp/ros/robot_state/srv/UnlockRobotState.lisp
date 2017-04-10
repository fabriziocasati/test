; Auto-generated. Do not edit!


(cl:in-package robot_state-srv)


;//! \htmlinclude UnlockRobotState-request.msg.html

(cl:defclass <UnlockRobotState-request> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass UnlockRobotState-request (<UnlockRobotState-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <UnlockRobotState-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'UnlockRobotState-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robot_state-srv:<UnlockRobotState-request> is deprecated: use robot_state-srv:UnlockRobotState-request instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <UnlockRobotState-request>) ostream)
  "Serializes a message object of type '<UnlockRobotState-request>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <UnlockRobotState-request>) istream)
  "Deserializes a message object of type '<UnlockRobotState-request>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<UnlockRobotState-request>)))
  "Returns string type for a service object of type '<UnlockRobotState-request>"
  "robot_state/UnlockRobotStateRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'UnlockRobotState-request)))
  "Returns string type for a service object of type 'UnlockRobotState-request"
  "robot_state/UnlockRobotStateRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<UnlockRobotState-request>)))
  "Returns md5sum for a message object of type '<UnlockRobotState-request>"
  "95e696a0d10686913abb262e0b4cbbcf")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'UnlockRobotState-request)))
  "Returns md5sum for a message object of type 'UnlockRobotState-request"
  "95e696a0d10686913abb262e0b4cbbcf")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<UnlockRobotState-request>)))
  "Returns full string definition for message of type '<UnlockRobotState-request>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'UnlockRobotState-request)))
  "Returns full string definition for message of type 'UnlockRobotState-request"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <UnlockRobotState-request>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <UnlockRobotState-request>))
  "Converts a ROS message object to a list"
  (cl:list 'UnlockRobotState-request
))
;//! \htmlinclude UnlockRobotState-response.msg.html

(cl:defclass <UnlockRobotState-response> (roslisp-msg-protocol:ros-message)
  ((succeeded
    :reader succeeded
    :initarg :succeeded
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass UnlockRobotState-response (<UnlockRobotState-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <UnlockRobotState-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'UnlockRobotState-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robot_state-srv:<UnlockRobotState-response> is deprecated: use robot_state-srv:UnlockRobotState-response instead.")))

(cl:ensure-generic-function 'succeeded-val :lambda-list '(m))
(cl:defmethod succeeded-val ((m <UnlockRobotState-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_state-srv:succeeded-val is deprecated.  Use robot_state-srv:succeeded instead.")
  (succeeded m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <UnlockRobotState-response>) ostream)
  "Serializes a message object of type '<UnlockRobotState-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'succeeded) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <UnlockRobotState-response>) istream)
  "Deserializes a message object of type '<UnlockRobotState-response>"
    (cl:setf (cl:slot-value msg 'succeeded) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<UnlockRobotState-response>)))
  "Returns string type for a service object of type '<UnlockRobotState-response>"
  "robot_state/UnlockRobotStateResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'UnlockRobotState-response)))
  "Returns string type for a service object of type 'UnlockRobotState-response"
  "robot_state/UnlockRobotStateResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<UnlockRobotState-response>)))
  "Returns md5sum for a message object of type '<UnlockRobotState-response>"
  "95e696a0d10686913abb262e0b4cbbcf")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'UnlockRobotState-response)))
  "Returns md5sum for a message object of type 'UnlockRobotState-response"
  "95e696a0d10686913abb262e0b4cbbcf")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<UnlockRobotState-response>)))
  "Returns full string definition for message of type '<UnlockRobotState-response>"
  (cl:format cl:nil "bool succeeded~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'UnlockRobotState-response)))
  "Returns full string definition for message of type 'UnlockRobotState-response"
  (cl:format cl:nil "bool succeeded~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <UnlockRobotState-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <UnlockRobotState-response>))
  "Converts a ROS message object to a list"
  (cl:list 'UnlockRobotState-response
    (cl:cons ':succeeded (succeeded msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'UnlockRobotState)))
  'UnlockRobotState-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'UnlockRobotState)))
  'UnlockRobotState-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'UnlockRobotState)))
  "Returns string type for a service object of type '<UnlockRobotState>"
  "robot_state/UnlockRobotState")