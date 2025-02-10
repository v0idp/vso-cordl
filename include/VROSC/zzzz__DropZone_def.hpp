#pragma once
// IWYU pragma private; include "VROSC/DropZone.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DropZone)
namespace System {
template<typename T>
class Action_1;
}
namespace VROSC {
class Droppable;
}
// Forward declare root types
namespace VROSC {
class DropZone;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::DropZone);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DropZone
class CORDL_TYPE DropZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnDroppedInto, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDroppedInto, put=__cordl_internal_set_OnDroppedInto)) ::System::Action_1<::UnityW<::VROSC::Droppable>>*  OnDroppedInto;

/// @brief Method Drop, addr 0x173b020, size 0x1c, virtual true, abstract: false, final false
inline void Drop(::VROSC::Droppable*  droppable) ;

static inline ::VROSC::DropZone* New_ctor() ;

constexpr ::System::Action_1<::UnityW<::VROSC::Droppable>>* const& __cordl_internal_get_OnDroppedInto() const;

constexpr ::System::Action_1<::UnityW<::VROSC::Droppable>>*& __cordl_internal_get_OnDroppedInto() ;

constexpr void __cordl_internal_set_OnDroppedInto(::System::Action_1<::UnityW<::VROSC::Droppable>>*  value) ;

/// @brief Method .ctor, addr 0x173b03c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DropZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DropZone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DropZone(DropZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DropZone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DropZone(DropZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1098};

/// @brief Field OnDroppedInto, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::Droppable>>*  ___OnDroppedInto;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DropZone, ___OnDroppedInto) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DropZone, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::DropZone);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DropZone*, "VROSC", "DropZone");
