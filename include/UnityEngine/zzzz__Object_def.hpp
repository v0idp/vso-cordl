#pragma once
// IWYU pragma private; include "UnityEngine/Object.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Object)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
struct HideFlags;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Object;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Object);
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Object
class CORDL_TYPE Object : public ::System::Object {
public:
// Declarations
/// @brief Field OffsetOfInstanceIDInCPlusPlusObject, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_OffsetOfInstanceIDInCPlusPlusObject, put=setStaticF_OffsetOfInstanceIDInCPlusPlusObject)) int32_t  OffsetOfInstanceIDInCPlusPlusObject;

 __declspec(property(get=get_hideFlags, put=set_hideFlags)) ::UnityEngine::HideFlags  hideFlags;

/// @brief Field m_CachedPtr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CachedPtr, put=__cordl_internal_set_m_CachedPtr)) ::System::IntPtr  m_CachedPtr;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

/// @brief Method CheckNullArgument, addr 0x2f8ee48, size 0x4c, virtual false, abstract: false, final false
static inline void CheckNullArgument(::System::Object*  arg, ::StringW  message) ;

/// @brief Method CompareBaseObjects, addr 0x2f8e9ec, size 0xa8, virtual false, abstract: false, final false
static inline bool CompareBaseObjects(::UnityEngine::Object*  lhs, ::UnityEngine::Object*  rhs) ;

/// @brief Method Destroy, addr 0x2f8f48c, size 0x78, virtual false, abstract: false, final false
static inline void Destroy(::UnityEngine::Object*  obj) ;

/// @brief Method Destroy, addr 0x2f8f440, size 0x4c, virtual false, abstract: false, final false
static inline void Destroy(::UnityEngine::Object*  obj, float_t  t) ;

/// @brief Method DestroyImmediate, addr 0x2f8f548, size 0x78, virtual false, abstract: false, final false
static inline void DestroyImmediate(::UnityEngine::Object*  obj) ;

/// @brief Method DestroyImmediate, addr 0x2f8f504, size 0x44, virtual false, abstract: false, final false
static inline void DestroyImmediate(::UnityEngine::Object*  obj, bool  allowDestroyingAssets) ;

/// @brief Method DontDestroyOnLoad, addr 0x2f8f604, size 0x3c, virtual false, abstract: false, final false
static inline void DontDestroyOnLoad(::UnityEngine::Object*  target) ;

/// @brief Method Equals, addr 0x2f8e8f0, size 0xfc, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method FindObjectFromInstanceID, addr 0x2f8f934, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> FindObjectFromInstanceID(int32_t  instanceID) ;

/// @brief Method FindObjectOfType, addr 0x2f8f6c0, size 0xa4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> FindObjectOfType(::System::Type*  type, bool  includeInactive) ;

/// @brief Method FindObjectOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T FindObjectOfType() ;

/// @brief Method FindObjectsOfType, addr 0x2f8f5c0, size 0x44, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Object>,::Array<::UnityW<::UnityEngine::Object>>*> FindObjectsOfType(::System::Type*  type, bool  includeInactive) ;

/// @brief Method FindObjectsOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T,::Array<T>*> FindObjectsOfType() ;

/// @brief Method GetCachedPtr, addr 0x2f8eb18, size 0x8, virtual false, abstract: false, final false
inline ::System::IntPtr GetCachedPtr() ;

/// @brief Method GetHashCode, addr 0x2f8e8e8, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetInstanceID, addr 0x2f8e7a8, size 0x118, virtual false, abstract: false, final false
inline int32_t GetInstanceID() ;

/// @brief Method GetName, addr 0x2f8eb94, size 0x3c, virtual false, abstract: false, final false
static inline ::StringW GetName(::UnityEngine::Object*  obj) ;

/// @brief Method GetOffsetOfInstanceIDInCPlusPlusObject, addr 0x2f8e8c0, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetOffsetOfInstanceIDInCPlusPlusObject() ;

/// @brief Method Instantiate, addr 0x2f8f178, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object*  original) ;

/// @brief Method Instantiate, addr 0x2f8f2a4, size 0x148, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object*  original, ::UnityEngine::Transform*  parent, bool  instantiateInWorldSpace) ;

/// @brief Method Instantiate, addr 0x2f8ec98, size 0x1b0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object*  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method Instantiate, addr 0x2f8ef2c, size 0x1a4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object*  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Transform*  parent) ;

/// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Instantiate(T  original) ;

/// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Instantiate(T  original, ::UnityEngine::Transform*  parent) ;

/// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Instantiate(T  original, ::UnityEngine::Transform*  parent, bool  worldPositionStays) ;

/// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Instantiate(T  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Instantiate(T  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Transform*  parent) ;

/// @brief Method Internal_CloneSingle, addr 0x2f8f268, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Internal_CloneSingle(::UnityEngine::Object*  data) ;

/// @brief Method Internal_CloneSingleWithParent, addr 0x2f8f3ec, size 0x54, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Internal_CloneSingleWithParent(::UnityEngine::Object*  data, ::UnityEngine::Transform*  parent, bool  worldPositionStays) ;

/// @brief Method Internal_InstantiateSingle, addr 0x2f8ee94, size 0x98, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Internal_InstantiateSingle(::UnityEngine::Object*  data, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method Internal_InstantiateSingleWithParent, addr 0x2f8f0d0, size 0xa8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Internal_InstantiateSingleWithParent(::UnityEngine::Object*  data, ::UnityEngine::Transform*  parent, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method Internal_InstantiateSingleWithParent_Injected, addr 0x2f8f8d8, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Internal_InstantiateSingleWithParent_Injected(::UnityEngine::Object*  data, ::UnityEngine::Transform*  parent, ::ByRef<::UnityEngine::Vector3>  pos, ::ByRef<::UnityEngine::Quaternion>  rot) ;

/// @brief Method Internal_InstantiateSingle_Injected, addr 0x2f8f884, size 0x54, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Internal_InstantiateSingle_Injected(::UnityEngine::Object*  data, ::ByRef<::UnityEngine::Vector3>  pos, ::ByRef<::UnityEngine::Quaternion>  rot) ;

/// @brief Method IsNativeObjectAlive, addr 0x2f8eaf8, size 0x20, virtual false, abstract: false, final false
static inline bool IsNativeObjectAlive(::UnityEngine::Object*  o) ;

static inline ::UnityEngine::Object* New_ctor() ;

/// @brief Method SetName, addr 0x2f8ec54, size 0x44, virtual false, abstract: false, final false
static inline void SetName(::UnityEngine::Object*  obj, ::StringW  name) ;

/// @brief Method ToString, addr 0x2f8f764, size 0x74, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x2f8f7d8, size 0x3c, virtual false, abstract: false, final false
static inline ::StringW ToString(::UnityEngine::Object*  obj) ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_CachedPtr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_CachedPtr() ;

constexpr void __cordl_internal_set_m_CachedPtr(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x2f8cde4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_OffsetOfInstanceIDInCPlusPlusObject() ;

/// @brief Method get_hideFlags, addr 0x2f8f640, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::HideFlags get_hideFlags() ;

/// @brief Method get_name, addr 0x2f8eb20, size 0x74, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method op_Equality, addr 0x2f8c098, size 0x64, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::Object*  x, ::UnityEngine::Object*  y) ;

/// @brief Method op_Implicit, addr 0x2f8ea94, size 0x64, virtual false, abstract: false, final false
static inline bool op_Implicit_bool(::UnityEngine::Object*  exists) ;

/// @brief Method op_Inequality, addr 0x2f8f814, size 0x70, virtual false, abstract: false, final false
static inline bool op_Inequality(::UnityEngine::Object*  x, ::UnityEngine::Object*  y) ;

static inline void setStaticF_OffsetOfInstanceIDInCPlusPlusObject(int32_t  value) ;

/// @brief Method set_hideFlags, addr 0x2f8f67c, size 0x44, virtual false, abstract: false, final false
inline void set_hideFlags(::UnityEngine::HideFlags  value) ;

/// @brief Method set_name, addr 0x2f8ebd0, size 0x84, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Object() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Object", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Object(Object && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Object", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Object(Object const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8616};

/// @brief Field cloneDestroyedMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  cloneDestroyedMessage{u"Instantiate failed because the clone was destroyed during creation. This can happen if DestroyImmediate is called in MonoBehaviour.Awake."};

/// @brief Field objectIsNullMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  objectIsNullMessage{u"The Object you want to instantiate is null."};

/// @brief Field m_CachedPtr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_CachedPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Object, ___m_CachedPtr) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Object, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Object);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Object*, "UnityEngine", "Object");
