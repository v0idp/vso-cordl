#pragma once
// IWYU pragma private; include "VROSC/RadioButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SignalNode_def.hpp"
CORDL_MODULE_EXPORT(RadioButton)
namespace UnityEngine {
class Transform;
}
namespace VROSC {
class RadioButtonParent;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class RadioButton;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::RadioButton);
// Dependencies VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.RadioButton
class CORDL_TYPE RadioButton : public ::VROSC::SignalNode {
public:
// Declarations
/// @brief Field _active, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__active, put=__cordl_internal_set__active)) bool  _active;

/// @brief Field _radioButtonParent, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__radioButtonParent, put=__cordl_internal_set__radioButtonParent)) ::UnityW<::VROSC::RadioButtonParent>  _radioButtonParent;

/// @brief Field _signal, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__signal, put=__cordl_internal_set__signal)) ::VROSC::Signal*  _signal;

/// @brief Field _signalBeganThisFrame, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__signalBeganThisFrame, put=__cordl_internal_set__signalBeganThisFrame)) bool  _signalBeganThisFrame;

/// @brief Method Awake, addr 0x1724e4c, size 0x20, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetRadioButtonParentRecursive, addr 0x1724e6c, size 0x10c, virtual false, abstract: false, final false
inline void GetRadioButtonParentRecursive(::UnityEngine::Transform*  t) ;

static inline ::VROSC::RadioButton* New_ctor() ;

/// @brief Method ReceiveSignal, addr 0x172501c, size 0x50, virtual true, abstract: false, final false
inline void ReceiveSignal(::VROSC::Signal*  signal) ;

/// @brief Method SetActive, addr 0x17251ec, size 0x20, virtual false, abstract: false, final false
inline void SetActive(bool  state) ;

/// @brief Method Update, addr 0x17251c4, size 0x28, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__active() const;

constexpr bool& __cordl_internal_get__active() ;

constexpr ::UnityW<::VROSC::RadioButtonParent> const& __cordl_internal_get__radioButtonParent() const;

constexpr ::UnityW<::VROSC::RadioButtonParent>& __cordl_internal_get__radioButtonParent() ;

constexpr ::VROSC::Signal* const& __cordl_internal_get__signal() const;

constexpr ::VROSC::Signal*& __cordl_internal_get__signal() ;

constexpr bool const& __cordl_internal_get__signalBeganThisFrame() const;

constexpr bool& __cordl_internal_get__signalBeganThisFrame() ;

constexpr void __cordl_internal_set__active(bool  value) ;

constexpr void __cordl_internal_set__radioButtonParent(::UnityW<::VROSC::RadioButtonParent>  value) ;

constexpr void __cordl_internal_set__signal(::VROSC::Signal*  value) ;

constexpr void __cordl_internal_set__signalBeganThisFrame(bool  value) ;

/// @brief Method .ctor, addr 0x172520c, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RadioButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RadioButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RadioButton(RadioButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RadioButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RadioButton(RadioButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1008};

/// @brief Field _radioButtonParent, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::RadioButtonParent>  ____radioButtonParent;

/// @brief Field _active, offset: 0x50, size: 0x1, def value: None
 bool  ____active;

/// @brief Field _signal, offset: 0x58, size: 0x8, def value: None
 ::VROSC::Signal*  ____signal;

/// @brief Field _signalBeganThisFrame, offset: 0x60, size: 0x1, def value: None
 bool  ____signalBeganThisFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::RadioButton, ____radioButtonParent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::RadioButton, ____active) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::RadioButton, ____signal) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::RadioButton, ____signalBeganThisFrame) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::RadioButton, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::RadioButton);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::RadioButton*, "VROSC", "RadioButton");
