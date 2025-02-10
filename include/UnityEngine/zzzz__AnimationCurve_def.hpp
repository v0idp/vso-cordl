#pragma once
// IWYU pragma private; include "UnityEngine/AnimationCurve.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationCurve)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Keyframe;
}
// Forward declare root types
namespace UnityEngine {
class AnimationCurve;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AnimationCurve);
// Dependencies System.IEquatable`1<T>, System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AnimationCurve
class CORDL_TYPE AnimationCurve : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Item)) ::UnityEngine::Keyframe  Item[];

 __declspec(property(get=get_keys)) ::ArrayW<::UnityEngine::Keyframe,::Array<::UnityEngine::Keyframe>*>  keys;

 __declspec(property(get=get_length)) int32_t  length;

/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::AnimationCurve*>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::AnimationCurve*>*() noexcept;

/// @brief Method EaseInOut, addr 0x2f5ca48, size 0x130, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* EaseInOut(float_t  timeStart, float_t  valueStart, float_t  timeEnd, float_t  valueEnd) ;

/// @brief Method Equals, addr 0x2f5cbc4, size 0x10c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0x2f5ccd0, size 0xc8, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::AnimationCurve*  other) ;

/// @brief Method Evaluate, addr 0x2f5c624, size 0x4c, virtual false, abstract: false, final false
inline float_t Evaluate(float_t  time) ;

/// @brief Method Finalize, addr 0x2f5c568, size 0xbc, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetHashCode, addr 0x2f5c880, size 0x3c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetKey, addr 0x2f5c774, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::Keyframe GetKey(int32_t  index) ;

/// @brief Method GetKey_Injected, addr 0x2f5c82c, size 0x54, virtual false, abstract: false, final false
inline void GetKey_Injected(int32_t  index, ::ByRef<::UnityEngine::Keyframe>  ret) ;

/// @brief Method GetKeys, addr 0x2f5c6ac, size 0x3c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Keyframe,::Array<::UnityEngine::Keyframe>*> GetKeys() ;

/// @brief Method Internal_Create, addr 0x2f5c4e8, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr Internal_Create(::ArrayW<::UnityEngine::Keyframe,::Array<::UnityEngine::Keyframe>*>  keys) ;

/// @brief Method Internal_Destroy, addr 0x2f5c4ac, size 0x3c, virtual false, abstract: false, final false
static inline void Internal_Destroy(::System::IntPtr  ptr) ;

/// @brief Method Internal_Equals, addr 0x2f5c524, size 0x44, virtual false, abstract: false, final false
inline bool Internal_Equals(::System::IntPtr  other) ;

/// @brief Method Linear, addr 0x2f5c8bc, size 0x13c, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* Linear(float_t  timeStart, float_t  valueStart, float_t  timeEnd, float_t  valueEnd) ;

static inline ::UnityEngine::AnimationCurve* New_ctor() ;

static inline ::UnityEngine::AnimationCurve* New_ctor(::ArrayW<::UnityEngine::Keyframe,::Array<::UnityEngine::Keyframe>*>  keys) ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x2f5cb78, size 0x4c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x2f5c9f8, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::UnityEngine::Keyframe,::Array<::UnityEngine::Keyframe>*>  keys) ;

/// @brief Method get_Item, addr 0x2f5c6e8, size 0x8c, virtual false, abstract: false, final false
inline ::UnityEngine::Keyframe get_Item(int32_t  index) ;

/// @brief Method get_keys, addr 0x2f5c670, size 0x3c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Keyframe,::Array<::UnityEngine::Keyframe>*> get_keys() ;

/// @brief Method get_length, addr 0x2f5c7f0, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_length() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::AnimationCurve*>"
constexpr ::System::IEquatable_1<::UnityEngine::AnimationCurve*>* i___System__IEquatable_1___UnityEngine__AnimationCurve__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationCurve() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationCurve", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationCurve(AnimationCurve && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationCurve", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationCurve(AnimationCurve const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8383};

/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AnimationCurve, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimationCurve, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AnimationCurve);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimationCurve*, "UnityEngine", "AnimationCurve");
