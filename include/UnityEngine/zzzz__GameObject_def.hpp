#pragma once
// IWYU pragma private; include "UnityEngine/GameObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameObject)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Array;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
struct PrimitiveType;
}
namespace UnityEngine {
struct SendMessageOptions;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine {
class GameObject;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GameObject);
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GameObject
class CORDL_TYPE GameObject : public ::UnityEngine::Object {
public:
// Declarations
 __declspec(property(get=get_activeInHierarchy)) bool  activeInHierarchy;

 __declspec(property(get=get_activeSelf)) bool  activeSelf;

 __declspec(property(get=get_gameObject)) ::UnityW<::UnityEngine::GameObject>  gameObject;

 __declspec(property(get=get_layer, put=set_layer)) int32_t  layer;

 __declspec(property(get=get_scene)) ::UnityEngine::SceneManagement::Scene  scene;

 __declspec(property(get=get_tag, put=set_tag)) ::StringW  tag;

 __declspec(property(get=get_transform)) ::UnityW<::UnityEngine::Transform>  transform;

/// @brief Method AddComponent, addr 0x2f8a924, size 0x44, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Component> AddComponent(::System::Type*  componentType) ;

/// @brief Method AddComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T AddComponent() ;

/// @brief Method CompareTag, addr 0x2f887ac, size 0x44, virtual false, abstract: false, final false
inline bool CompareTag(::StringW  tag) ;

/// @brief Method CreatePrimitive, addr 0x2f8a6ac, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreatePrimitive(::UnityEngine::PrimitiveType  type) ;

/// @brief Method Find, addr 0x2f8ade0, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> Find(::StringW  name) ;

/// @brief Method FindGameObjectsWithTag, addr 0x2f8aae0, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::GameObject>,::Array<::UnityW<::UnityEngine::GameObject>>*> FindGameObjectsWithTag(::StringW  tag) ;

/// @brief Method GetComponent, addr 0x2f8a780, size 0x44, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Component> GetComponent(::StringW  type) ;

/// @brief Method GetComponent, addr 0x2f88190, size 0x44, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Component> GetComponent(::System::Type*  type) ;

/// @brief Method GetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetComponent() ;

/// @brief Method GetComponentByName, addr 0x2f8a73c, size 0x44, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Component> GetComponentByName(::StringW  type) ;

/// @brief Method GetComponentFastPath, addr 0x2f8a6e8, size 0x54, virtual false, abstract: false, final false
inline void GetComponentFastPath(::System::Type*  type, ::System::IntPtr  oneFurtherThanResultValue) ;

/// @brief Method GetComponentInChildren, addr 0x2f883f4, size 0x54, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Component> GetComponentInChildren(::System::Type*  type, bool  includeInactive) ;

/// @brief Method GetComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetComponentInChildren() ;

/// @brief Method GetComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetComponentInChildren(bool  includeInactive) ;

/// @brief Method GetComponentInParent, addr 0x2f884d0, size 0x54, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Component> GetComponentInParent(::System::Type*  type, bool  includeInactive) ;

/// @brief Method GetComponentInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetComponentInParent() ;

/// @brief Method GetComponentInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetComponentInParent(bool  includeInactive) ;

/// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::ArrayW<T,::Array<T>*> GetComponents() ;

/// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void GetComponents(::System::Collections::Generic::List_1<T>*  results) ;

/// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::ArrayW<T,::Array<T>*> GetComponentsInChildren() ;

/// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::ArrayW<T,::Array<T>*> GetComponentsInChildren(bool  includeInactive) ;

/// @brief Method GetComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void GetComponentsInChildren(bool  includeInactive, ::System::Collections::Generic::List_1<T>*  results) ;

/// @brief Method GetComponentsInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::ArrayW<T,::Array<T>*> GetComponentsInParent() ;

/// @brief Method GetComponentsInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::ArrayW<T,::Array<T>*> GetComponentsInParent(bool  includeInactive) ;

/// @brief Method GetComponentsInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void GetComponentsInParent(bool  includeInactive, ::System::Collections::Generic::List_1<T>*  results) ;

/// @brief Method GetComponentsInternal, addr 0x2f8a7c4, size 0x84, virtual false, abstract: false, final false
inline ::System::Array* GetComponentsInternal(::System::Type*  type, bool  useSearchTypeAsArrayReturnType, bool  recursive, bool  includeInactive, bool  reverse, ::System::Object*  resultList) ;

/// @brief Method Internal_AddComponentWithType, addr 0x2f8a8e0, size 0x44, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Component> Internal_AddComponentWithType(::System::Type*  componentType) ;

/// @brief Method Internal_CreateGameObject, addr 0x2f8ac08, size 0x44, virtual false, abstract: false, final false
static inline void Internal_CreateGameObject(::UnityEngine::GameObject*  self, ::StringW  name) ;

static inline ::UnityEngine::GameObject* New_ctor() ;

static inline ::UnityEngine::GameObject* New_ctor(::StringW  name) ;

static inline ::UnityEngine::GameObject* New_ctor(::StringW  name, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  components) ;

/// @brief Method SendMessage, addr 0x2f8ab1c, size 0x5c, virtual false, abstract: false, final false
inline void SendMessage(::StringW  methodName, ::System::Object*  value, ::UnityEngine::SendMessageOptions  options) ;

/// @brief Method SetActive, addr 0x2f8aa24, size 0x44, virtual false, abstract: false, final false
inline void SetActive(bool  value) ;

/// @brief Method TryGetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool TryGetComponent(::ByRef<T>  component) ;

/// @brief Method TryGetComponent, addr 0x2f88288, size 0xa0, virtual false, abstract: false, final false
inline bool TryGetComponent(::System::Type*  type, ::ByRef<::UnityEngine::Component*>  component) ;

/// @brief Method TryGetComponentFastPath, addr 0x2f8a88c, size 0x54, virtual false, abstract: false, final false
inline void TryGetComponentFastPath(::System::Type*  type, ::System::IntPtr  oneFurtherThanResultValue) ;

/// @brief Method TryGetComponentInternal, addr 0x2f8a848, size 0x44, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Component> TryGetComponentInternal(::System::Type*  type) ;

/// @brief Method .ctor, addr 0x2f8ac4c, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x2f8ab78, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method .ctor, addr 0x2f8acd0, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  components) ;

/// @brief Method get_activeInHierarchy, addr 0x2f8aaa4, size 0x3c, virtual false, abstract: false, final false
inline bool get_activeInHierarchy() ;

/// @brief Method get_activeSelf, addr 0x2f8aa68, size 0x3c, virtual false, abstract: false, final false
inline bool get_activeSelf() ;

/// @brief Method get_gameObject, addr 0x2f8aeac, size 0xbf4, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_gameObject() ;

/// @brief Method get_layer, addr 0x2f8a9a4, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_layer() ;

/// @brief Method get_scene, addr 0x2f8ae1c, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::SceneManagement::Scene get_scene() ;

/// @brief Method get_scene_Injected, addr 0x2f8ae68, size 0x44, virtual false, abstract: false, final false
inline void get_scene_Injected(::ByRef<::UnityEngine::SceneManagement::Scene>  ret) ;

/// @brief Method get_tag, addr 0x2f8863c, size 0x3c, virtual false, abstract: false, final false
inline ::StringW get_tag() ;

/// @brief Method get_transform, addr 0x2f8a968, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_transform() ;

/// @brief Method set_layer, addr 0x2f8a9e0, size 0x44, virtual false, abstract: false, final false
inline void set_layer(int32_t  value) ;

/// @brief Method set_tag, addr 0x2f886f0, size 0x44, virtual false, abstract: false, final false
inline void set_tag(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameObject(GameObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameObject(GameObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8590};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GameObject, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::GameObject);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GameObject*, "UnityEngine", "GameObject");
