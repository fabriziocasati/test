; Auto-generated. Do not edit!


(cl:in-package robot_state-srv)


;//! \htmlinclude SetRobotState-request.msg.html

(cl:defclass <SetRobotState-request> (roslisp-msg-protocol:ros-message)
  ((robot_state
    :reader robot_state
    :initarg :robot_state
    :type cl:fixnum
    :initform 0))
)

(cl:defclass SetRobotState-request (<SetRobotState-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetRobotState-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetRobotState-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robot_state-srv:<SetRobotState-request> is deprecated: use robot_state-srv:SetRobotState-request instead.")))

(cl:ensure-generic-function 'robot_state-val :lambda-list '(m))
(cl:defmethod robot_state-val ((m <SetRobotState-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_state-srv:robot_state-val is deprecated.  Use robot_state-srv:robot_state instead.")
  (robot_state m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetRobotState-request>) ostream)
  "Serializes a message object of type '<SetRobotState-request>"
  (cl:let* ((signed (cl:slot-value msg 'robot_state)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetRobotState-request>) istream)
  "Deserializes a message object of type '<SetRobotState-request>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'robot_state) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetRobotState-request>)))
  "Returns string type for a service object of type '<SetRobotState-request>"
  "robot_state/SetRobotStateRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetRobotState-request)))
  "Returns string type for a service object of type 'SetRobotState-request"
  "robot_state/SetRobotStateRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetRobotState-request>)))
  "Returns md5sum for a message object of type '<SetRobotState-request>"
  "bef0ae7d911622f50b16b03d5dfd28d9")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetRobotState-request)))
  "Returns md5sum for a message object of type 'SetRobotState-request"
  "bef0ae7d911622f50b16b03d5dfd28d9")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetRobotState-request>)))
  "Returns full string definition for message of type '<SetRobotState-request>"
  (cl:format cl:nil "int8 robot_state~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetRobotState-request)))
  "Returns full string definition for message of type 'SetRobotState-request"
  (cl:format cl:nil "int8 robot_state~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetRobotState-request>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetRobotState-request>))
  "Converts a ROS message object to a list"
  (cl:list 'SetRobotState-request
    (cl:cons ':robot_state (robot_state msg))
))
;//! \htmlinclude SetRobotState-response.msg.html

(cl:defclass <SetRobotState-response> (roslisp-msg-protocol:ros-message)
  ((succeeded
    :reader succeeded
    :initarg :succeeded
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass SetRobotState-response (<SetRobotState-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetRobotState-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetRobotState-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robot_state-srv:<SetRobotState-response> is deprecated: use robot_state-srv:SetRobotState-response instead.")))

(cl:ensure-generic-function 'succeeded-val :lambda-list '(m))
(cl:defmethod succeeded-val ((m <SetRobotState-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_state-srv:succeeded-val is deprecated.  Use robot_state-srv:succeeded instead.")
  (succeeded m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetRobotState-response>) ostream)
  "Serializes a message object of type '<SetRobotState-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'succeeded) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetRobotState-response>) istream)
  "Deserializes a message object of type '<SetRobotState-response>"
    (cl:setf (cl:slot-value msg 'succeeded) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetRobotState-response>)))
  "Returns string type for a service object of type '<SetRobotState-response>"
  "robot_state/SetRobotStateResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetRobotState-response)))
  "Returns string type for a service object of type 'SetRobotState-response"
  "robot_state/SetRobotStateResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetRobotState-response>)))
  "Returns md5sum for a message object of type '<SetRobotState-response>"
  "bef0ae7d911622f50b16b03d5dfd28d9")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetRobotState-response)))
  "Returns md5sum for a message object of type 'SetRobotState-response"
  "bef0ae7d911622f50b16b03d5dfd28d9")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetRobotState-response>)))
  "Returns full string definition for message of type '<SetRobotState-response>"
  (cl:format cl:nil "bool succeeded~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetRobotState-response)))
  "Returns full string definition for message of type 'SetRobotState-response"
  (cl:format cl:nil "bool succeeded~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetRobotState-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetRobotState-response>))
  "Converts a ROS message object to a list"
  (cl:list 'SetRobotState-response
    (cl:cons ':succeeded (succeeded msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'SetRobotState)))
  'SetRobotState-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'SetRobotState)))
  'SetRobotState-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetRobotState)))
  "Returns string type for a service object of type '<SetRobotState>"
  "robot_state/SetRobotState")