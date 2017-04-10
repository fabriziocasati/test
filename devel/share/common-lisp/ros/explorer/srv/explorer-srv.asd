
(cl:in-package :asdf)

(defsystem "explorer-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "RobotPosition" :depends-on ("_package_RobotPosition"))
    (:file "_package_RobotPosition" :depends-on ("_package"))
    (:file "GetCost" :depends-on ("_package_GetCost"))
    (:file "_package_GetCost" :depends-on ("_package"))
    (:file "DistanceFromRobot" :depends-on ("_package_DistanceFromRobot"))
    (:file "_package_DistanceFromRobot" :depends-on ("_package"))
  ))