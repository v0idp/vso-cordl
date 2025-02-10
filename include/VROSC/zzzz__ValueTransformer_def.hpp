#pragma once
// IWYU pragma private; include "VROSC/ValueTransformer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SignalNode_def.hpp"
CORDL_MODULE_EXPORT(ValueTransformer)
namespace UnityEngine {
class AnimationCurve;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class ValueTransformer;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ValueTransformer);
// Dependencies VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ValueTransformer
class CORDL_TYPE ValueTransformer : public ::VROSC::SignalNode {
public:
// Declarations
/// @brief Field _transformationCurve, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformationCurve, put=__cordl_internal_set__transformationCurve)) ::UnityEngine::AnimationCurve*  _transformationCurve;

static inline ::VROSC::ValueTransformer* New_ctor() ;

/// @brief Method NodeBegin, addr 0x1722180, size 0x4, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method NodeEnd, addr 0x17221d8, size 0x4, virtual true, abstract: false, final false
inline void NodeEnd(::VROSC::Signal*  signal) ;

/// @brief Method NodeStay, addr 0x17221d4, size 0x4, virtual true, abstract: false, final false
inline void NodeStay(::VROSC::Signal*  signal) ;

/// @brief Method TransformValue, addr 0x1722184, size 0x50, virtual false, abstract: false, final false
inline ::VROSC::Signal* TransformValue(::VROSC::Signal*  signal) ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__transformationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__transformationCurve() ;

constexpr void __cordl_internal_set__transformationCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x17221dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValueTransformer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValueTransformer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ValueTransformer(ValueTransformer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValueTransformer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValueTransformer(ValueTransformer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{997};

/// @brief Field _transformationCurve, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____transformationCurve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ValueTransformer, ____transformationCurve) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ValueTransformer, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ValueTransformer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ValueTransformer*, "VROSC", "ValueTransformer");
