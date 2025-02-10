#pragma once
// IWYU pragma private; include "UnityEngine/Animation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Animation)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationState;
}
namespace UnityEngine {
class Animation_Enumerator;
}
// Forward declare root types
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class Animation_Enumerator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Animation);
MARK_REF_PTR_T(::UnityEngine::Animation_Enumerator);
// Dependencies System.Collections.IEnumerator, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Animation/Enumerator
class CORDL_TYPE Animation_Enumerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) ::System::Object*  Current;

/// @brief Field m_CurrentIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CurrentIndex, put=__cordl_internal_set_m_CurrentIndex)) int32_t  m_CurrentIndex;

/// @brief Field m_Outer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Outer, put=__cordl_internal_set_m_Outer)) ::UnityW<::UnityEngine::Animation>  m_Outer;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Method MoveNext, addr 0x2f52d08, size 0x60, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::UnityEngine::Animation_Enumerator* New_ctor(::UnityEngine::Animation*  outer) ;

/// @brief Method Reset, addr 0x2f52d68, size 0xc, virtual true, abstract: false, final true
inline void Reset() ;

constexpr int32_t const& __cordl_internal_get_m_CurrentIndex() const;

constexpr int32_t& __cordl_internal_get_m_CurrentIndex() ;

constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_m_Outer() const;

constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_m_Outer() ;

constexpr void __cordl_internal_set_m_CurrentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_Outer(::UnityW<::UnityEngine::Animation>  value) ;

/// @brief Method .ctor, addr 0x2f52c0c, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Animation*  outer) ;

/// @brief Method get_Current, addr 0x2f52cbc, size 0x4c, virtual true, abstract: false, final true
inline ::System::Object* get_Current() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Animation_Enumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Animation_Enumerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Animation_Enumerator(Animation_Enumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Animation_Enumerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Animation_Enumerator(Animation_Enumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12024};

/// @brief Field m_Outer, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animation>  ___m_Outer;

/// @brief Field m_CurrentIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___m_CurrentIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animation_Enumerator, ___m_Outer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animation_Enumerator, ___m_CurrentIndex) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Animation_Enumerator, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.Collections.IEnumerable, UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Animation
class CORDL_TYPE Animation : public ::UnityEngine::Behaviour {
public:
// Declarations
using Enumerator = ::UnityEngine::Animation_Enumerator;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method GetEnumerator, addr 0x2f52ba8, size 0x64, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* GetEnumerator() ;

/// @brief Method GetStateAtIndex, addr 0x2f52c3c, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationState* GetStateAtIndex(int32_t  index) ;

/// @brief Method GetStateCount, addr 0x2f52c80, size 0x3c, virtual false, abstract: false, final false
inline int32_t GetStateCount() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Animation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Animation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Animation(Animation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Animation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Animation(Animation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12025};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Animation, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Animation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animation*, "UnityEngine", "Animation");
NEED_NO_BOX(::UnityEngine::Animation_Enumerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animation_Enumerator*, "UnityEngine", "Animation/Enumerator");
