#pragma once
// IWYU pragma private; include "VROSC/NoteBoardStringAnimator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__Axis_def.hpp"
#include "VROSC/zzzz__NoteBoardNoteAnimator_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteBoardStringAnimator)
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
struct Axis;
}
namespace VROSC {
class NoteBoardNote;
}
// Forward declare root types
namespace VROSC {
class NoteBoardStringAnimator;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::NoteBoardStringAnimator);
// Dependencies VROSC.Axis, VROSC.NoteBoardNoteAnimator
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteBoardStringAnimator
class CORDL_TYPE NoteBoardStringAnimator : public ::VROSC::NoteBoardNoteAnimator {
public:
// Declarations
/// @brief Field _axis, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__axis, put=__cordl_internal_set__axis)) ::VROSC::Axis  _axis;

/// @brief Field _width, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__width, put=__cordl_internal_set__width)) float_t  _width;

/// @brief Method GetAxis, addr 0x17b2184, size 0x38, virtual false, abstract: false, final false
inline ::VROSC::Axis GetAxis(::UnityEngine::Vector3  scale) ;

/// @brief Method GetScale, addr 0x17b21bc, size 0x34, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetScale(::UnityEngine::Vector3  scale) ;

static inline ::VROSC::NoteBoardStringAnimator* New_ctor() ;

/// @brief Method SetRotation, addr 0x17b21f0, size 0x10c, virtual false, abstract: false, final false
inline void SetRotation() ;

/// @brief Method Setup, addr 0x17b2010, size 0xc4, virtual true, abstract: false, final false
inline void Setup(::VROSC::NoteBoardNote*  noteBoardNote, ::ArrayW<int32_t,::Array<int32_t>*>  numberOfFields, ::UnityEngine::Vector3  scale) ;

constexpr ::VROSC::Axis const& __cordl_internal_get__axis() const;

constexpr ::VROSC::Axis& __cordl_internal_get__axis() ;

constexpr float_t const& __cordl_internal_get__width() const;

constexpr float_t& __cordl_internal_get__width() ;

constexpr void __cordl_internal_set__axis(::VROSC::Axis  value) ;

constexpr void __cordl_internal_set__width(float_t  value) ;

/// @brief Method .ctor, addr 0x17b22fc, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteBoardStringAnimator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardStringAnimator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteBoardStringAnimator(NoteBoardStringAnimator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardStringAnimator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteBoardStringAnimator(NoteBoardStringAnimator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1441};

/// @brief Field _axis, offset: 0x88, size: 0x4, def value: None
 ::VROSC::Axis  ____axis;

/// @brief Field _width, offset: 0x8c, size: 0x4, def value: None
 float_t  ____width;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteBoardStringAnimator, ____axis) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardStringAnimator, ____width) == 0x8c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteBoardStringAnimator, 0x90>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::NoteBoardStringAnimator);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardStringAnimator*, "VROSC", "NoteBoardStringAnimator");
