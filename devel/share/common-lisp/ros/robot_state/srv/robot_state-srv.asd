
(cl:in-package :asdf)

(defsystem "robot_state-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "LockRobotState" :depends-on ("_package_LockRobotState"))
    (:file "_package_LockRobotState" :depends-on ("_package"))
    (:file "GetRobotState" :depends-on ("_package_GetRobotState"))
    (:file "_package_GetRobotState" :depends-on ("_package"))
    (:file "UnlockRobotState" :depends-on ("_package_UnlockRobotState"))
    (:file "_package_UnlockRobotState" :depends-on ("_package"))
    (:file "SetRobotState" :depends-on ("_package_SetRobotState"))
    (:file "_package_SetRobotState" :depends-on ("_package"))
  ))