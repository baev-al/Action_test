@startuml
class User {
  -String id
  -String name
  +String name()
}
User <|-- SpecificUser
@enduml
