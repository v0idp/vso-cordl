#pragma once
// IWYU pragma private; include "VROSC/ScaleNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__IntNode_def.hpp"
#include "VROSC/zzzz__Scale_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScaleNode)
namespace System {
class Action;
}
namespace VROSC {
struct Note;
}
namespace VROSC {
struct Scale;
}
// Forward declare root types
namespace VROSC {
class ScaleNode;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ScaleNode);
// Dependencies VROSC.IntNode, VROSC.Scale
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ScaleNode
class CORDL_TYPE ScaleNode : public ::VROSC::IntNode {
public:
// Declarations
/// @brief Field OnScaleSet, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnScaleSet, put=__cordl_internal_set_OnScaleSet)) ::System::Action*  OnScaleSet;

 __declspec(property(get=get_Scale, put=set_Scale)) ::VROSC::Scale  Scale;

/// @brief Field _scale, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__scale, put=__cordl_internal_set__scale)) ::VROSC::Scale  _scale;

static inline ::VROSC::ScaleNode* New_ctor() ;

/// @brief Method OnValidate, addr 0x171afa8, size 0x1c, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method RandomScale, addr 0x171b014, size 0xb8, virtual false, abstract: false, final false
static inline ::VROSC::Scale RandomScale(::ByRef<::VROSC::Note>  baseNote) ;

/// @brief Method SetScale, addr 0x171afdc, size 0x38, virtual false, abstract: false, final false
inline void SetScale(::VROSC::Scale  scale) ;

/// @brief Method SetValueInRange, addr 0x171afc4, size 0x18, virtual true, abstract: false, final false
inline int32_t SetValueInRange(int32_t  value) ;

constexpr ::System::Action* const& __cordl_internal_get_OnScaleSet() const;

constexpr ::System::Action*& __cordl_internal_get_OnScaleSet() ;

constexpr ::VROSC::Scale const& __cordl_internal_get__scale() const;

constexpr ::VROSC::Scale& __cordl_internal_get__scale() ;

constexpr void __cordl_internal_set_OnScaleSet(::System::Action*  value) ;

constexpr void __cordl_internal_set__scale(::VROSC::Scale  value) ;

/// @brief Method .ctor, addr 0x171b0cc, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Scale, addr 0x171af94, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::Scale get_Scale() ;

/// @brief Method set_Scale, addr 0x171af9c, size 0xc, virtual false, abstract: false, final false
inline void set_Scale(::VROSC::Scale  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScaleNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScaleNode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScaleNode(ScaleNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScaleNode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScaleNode(ScaleNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{940};

/// @brief Field OnScaleSet, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  ___OnScaleSet;

/// @brief Field _scale, offset: 0x40, size: 0x4, def value: None
 ::VROSC::Scale  ____scale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ScaleNode, ___OnScaleSet) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleNode, ____scale) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ScaleNode, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ScaleNode);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ScaleNode*, "VROSC", "ScaleNode");
