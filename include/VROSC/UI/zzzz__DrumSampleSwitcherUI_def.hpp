#pragma once
// IWYU pragma private; include "VROSC/UI/DrumSampleSwitcherUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DrumSampleSwitcherUI)
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace TMPro {
class TextMeshPro;
}
namespace VROSC {
class ModularDrumsDataController;
}
namespace VROSC {
class UISpinner;
}
// Forward declare root types
namespace VROSC::UI {
class DrumSampleSwitcherUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::DrumSampleSwitcherUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.DrumSampleSwitcherUI
class CORDL_TYPE DrumSampleSwitcherUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnNewDataSet, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnNewDataSet, put=__cordl_internal_set_OnNewDataSet)) ::System::Action_2<int32_t,bool>*  OnNewDataSet;

 __declspec(property(get=get_Spinner)) ::UnityW<::VROSC::UISpinner>  Spinner;

/// @brief Field _currentName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentName, put=__cordl_internal_set__currentName)) ::UnityW<::TMPro::TextMeshPro>  _currentName;

/// @brief Field _dataController, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataController, put=__cordl_internal_set__dataController)) ::VROSC::ModularDrumsDataController*  _dataController;

/// @brief Field _empadId, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__empadId, put=__cordl_internal_set__empadId)) int32_t  _empadId;

/// @brief Field _groupId, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__groupId, put=__cordl_internal_set__groupId)) int32_t  _groupId;

/// @brief Field _spinner, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__spinner, put=__cordl_internal_set__spinner)) ::UnityW<::VROSC::UISpinner>  _spinner;

/// @brief Method Awake, addr 0x17e240c, size 0xd8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method IncrementSample, addr 0x17e2b3c, size 0x1c, virtual false, abstract: false, final false
inline void IncrementSample() ;

static inline ::VROSC::UI::DrumSampleSwitcherUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17e24e4, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetActiveSample, addr 0x17e266c, size 0x4bc, virtual false, abstract: false, final false
inline void SetActiveSample(bool  select, bool  preview) ;

/// @brief Method SetSample, addr 0x17e25bc, size 0xb0, virtual false, abstract: false, final false
inline void SetSample(int32_t  index) ;

/// @brief Method Setup, addr 0x17e2b28, size 0x14, virtual false, abstract: false, final false
inline void Setup(int32_t  empadId, ::VROSC::ModularDrumsDataController*  dataController, int32_t  groupId) ;

constexpr ::System::Action_2<int32_t,bool>* const& __cordl_internal_get_OnNewDataSet() const;

constexpr ::System::Action_2<int32_t,bool>*& __cordl_internal_get_OnNewDataSet() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__currentName() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__currentName() ;

constexpr ::VROSC::ModularDrumsDataController* const& __cordl_internal_get__dataController() const;

constexpr ::VROSC::ModularDrumsDataController*& __cordl_internal_get__dataController() ;

constexpr int32_t const& __cordl_internal_get__empadId() const;

constexpr int32_t& __cordl_internal_get__empadId() ;

constexpr int32_t const& __cordl_internal_get__groupId() const;

constexpr int32_t& __cordl_internal_get__groupId() ;

constexpr ::UnityW<::VROSC::UISpinner> const& __cordl_internal_get__spinner() const;

constexpr ::UnityW<::VROSC::UISpinner>& __cordl_internal_get__spinner() ;

constexpr void __cordl_internal_set_OnNewDataSet(::System::Action_2<int32_t,bool>*  value) ;

constexpr void __cordl_internal_set__currentName(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__dataController(::VROSC::ModularDrumsDataController*  value) ;

constexpr void __cordl_internal_set__empadId(int32_t  value) ;

constexpr void __cordl_internal_set__groupId(int32_t  value) ;

constexpr void __cordl_internal_set__spinner(::UnityW<::VROSC::UISpinner>  value) ;

/// @brief Method .ctor, addr 0x17e2b58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Spinner, addr 0x17e2404, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::UISpinner> get_Spinner() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrumSampleSwitcherUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrumSampleSwitcherUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DrumSampleSwitcherUI(DrumSampleSwitcherUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrumSampleSwitcherUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrumSampleSwitcherUI(DrumSampleSwitcherUI const& ) = delete;

/// @brief Field MaxEmpadNotes offset 0xffffffff size 0x4
static constexpr int32_t  MaxEmpadNotes{static_cast<int32_t>(0x80)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1595};

/// @brief Field OnNewDataSet, offset: 0x20, size: 0x8, def value: None
 ::System::Action_2<int32_t,bool>*  ___OnNewDataSet;

/// @brief Field _spinner, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UISpinner>  ____spinner;

/// @brief Field _currentName, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____currentName;

/// @brief Field _dataController, offset: 0x38, size: 0x8, def value: None
 ::VROSC::ModularDrumsDataController*  ____dataController;

/// @brief Field _empadId, offset: 0x40, size: 0x4, def value: None
 int32_t  ____empadId;

/// @brief Field _groupId, offset: 0x44, size: 0x4, def value: None
 int32_t  ____groupId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::DrumSampleSwitcherUI, ___OnNewDataSet) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::DrumSampleSwitcherUI, ____spinner) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::DrumSampleSwitcherUI, ____currentName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::DrumSampleSwitcherUI, ____dataController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::DrumSampleSwitcherUI, ____empadId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::DrumSampleSwitcherUI, ____groupId) == 0x44, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::DrumSampleSwitcherUI, 0x48>, "Size mismatch!");

} // namespace end def VROSC::UI
NEED_NO_BOX(::VROSC::UI::DrumSampleSwitcherUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::DrumSampleSwitcherUI*, "VROSC.UI", "DrumSampleSwitcherUI");
