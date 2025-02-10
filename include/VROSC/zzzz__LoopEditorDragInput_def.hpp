#pragma once
// IWYU pragma private; include "VROSC/LoopEditorDragInput.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__InputArea_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LoopEditorDragInput)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class ClickData;
}
// Forward declare root types
namespace VROSC {
class LoopEditorDragInput;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopEditorDragInput);
// Dependencies UnityEngine.Vector3, VROSC.InputArea
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopEditorDragInput
class CORDL_TYPE LoopEditorDragInput : public ::VROSC::InputArea {
public:
// Declarations
/// @brief Field OnDragBegin, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDragBegin, put=__cordl_internal_set_OnDragBegin)) ::System::Action*  OnDragBegin;

/// @brief Field OnDragEnd, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDragEnd, put=__cordl_internal_set_OnDragEnd)) ::System::Action*  OnDragEnd;

/// @brief Field OnDragUpdated, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDragUpdated, put=__cordl_internal_set_OnDragUpdated)) ::System::Action_1<::UnityEngine::Vector3>*  OnDragUpdated;

/// @brief Field _grabStart, offset 0xac, size 0xc 
 __declspec(property(get=__cordl_internal_get__grabStart, put=__cordl_internal_set__grabStart)) ::UnityEngine::Vector3  _grabStart;

/// @brief Field _sensitivity, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__sensitivity, put=__cordl_internal_set__sensitivity)) float_t  _sensitivity;

static inline ::VROSC::LoopEditorDragInput* New_ctor() ;

/// @brief Method SetIsInteracting, addr 0x189236c, size 0x70, virtual true, abstract: false, final false
inline void SetIsInteracting(::VROSC::ClickData*  clickData, bool  isInteracting) ;

/// @brief Method UpdateInput, addr 0x18923dc, size 0x78, virtual true, abstract: false, final false
inline void UpdateInput() ;

constexpr ::System::Action* const& __cordl_internal_get_OnDragBegin() const;

constexpr ::System::Action*& __cordl_internal_get_OnDragBegin() ;

constexpr ::System::Action* const& __cordl_internal_get_OnDragEnd() const;

constexpr ::System::Action*& __cordl_internal_get_OnDragEnd() ;

constexpr ::System::Action_1<::UnityEngine::Vector3>* const& __cordl_internal_get_OnDragUpdated() const;

constexpr ::System::Action_1<::UnityEngine::Vector3>*& __cordl_internal_get_OnDragUpdated() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__grabStart() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__grabStart() ;

constexpr float_t const& __cordl_internal_get__sensitivity() const;

constexpr float_t& __cordl_internal_get__sensitivity() ;

constexpr void __cordl_internal_set_OnDragBegin(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnDragEnd(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnDragUpdated(::System::Action_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set__grabStart(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__sensitivity(float_t  value) ;

/// @brief Method .ctor, addr 0x1892454, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopEditorDragInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopEditorDragInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopEditorDragInput(LoopEditorDragInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopEditorDragInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopEditorDragInput(LoopEditorDragInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{639};

/// @brief Field _sensitivity, offset: 0xa8, size: 0x4, def value: None
 float_t  ____sensitivity;

/// @brief Field _grabStart, offset: 0xac, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____grabStart;

/// @brief Field OnDragUpdated, offset: 0xb8, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Vector3>*  ___OnDragUpdated;

/// @brief Field OnDragBegin, offset: 0xc0, size: 0x8, def value: None
 ::System::Action*  ___OnDragBegin;

/// @brief Field OnDragEnd, offset: 0xc8, size: 0x8, def value: None
 ::System::Action*  ___OnDragEnd;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopEditorDragInput, ____sensitivity) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorDragInput, ____grabStart) == 0xac, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorDragInput, ___OnDragUpdated) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorDragInput, ___OnDragBegin) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorDragInput, ___OnDragEnd) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopEditorDragInput, 0xd0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopEditorDragInput);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopEditorDragInput*, "VROSC", "LoopEditorDragInput");
