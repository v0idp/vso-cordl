#pragma once
// IWYU pragma private; include "VROSC/WidgetHub.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(WidgetHub)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class WidgetController;
}
namespace VROSC {
struct WidgetSettings_Identifier;
}
namespace VROSC {
class WidgetSettings;
}
// Forward declare root types
namespace VROSC {
class WidgetHub;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::WidgetHub);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.WidgetHub
class CORDL_TYPE WidgetHub : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _widgets, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__widgets, put=__cordl_internal_set__widgets)) ::System::Collections::Generic::Dictionary_2<::VROSC::WidgetSettings_Identifier,::UnityW<::VROSC::WidgetController>>*  _widgets;

/// @brief Field _widgetsPrefabs, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__widgetsPrefabs, put=__cordl_internal_set__widgetsPrefabs)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::WidgetController>>*  _widgetsPrefabs;

/// @brief Method GetIsActive, addr 0x171053c, size 0xa0, virtual false, abstract: false, final false
inline bool GetIsActive(::VROSC::WidgetSettings_Identifier  identifier) ;

/// @brief Method GetTogglabeObjectByIdentifier, addr 0x17104a8, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::WidgetController> GetTogglabeObjectByIdentifier(::VROSC::WidgetSettings_Identifier  identifier) ;

/// @brief Method GetWidget, addr 0x17107ec, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::WidgetController> GetWidget(::VROSC::WidgetSettings_Identifier  identifier) ;

/// @brief Method GetWidgetsDefaultSettings, addr 0x17105dc, size 0x210, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::VROSC::WidgetSettings>>* GetWidgetsDefaultSettings() ;

static inline ::VROSC::WidgetHub* New_ctor() ;

/// @brief Method PlaceWidget, addr 0x1710880, size 0x4, virtual true, abstract: false, final false
inline void PlaceWidget(::VROSC::WidgetController*  target, ::VROSC::InputDevice*  device, ::UnityEngine::Vector3  pressPos, bool  gripping, bool  userHasOpenedBefore) ;

/// @brief Method ToggleById, addr 0x1710328, size 0x180, virtual false, abstract: false, final false
inline void ToggleById(::VROSC::WidgetSettings_Identifier  identifier, ::UnityEngine::Vector3  position, ::VROSC::InputDevice*  device, bool  gripping) ;

constexpr ::System::Collections::Generic::Dictionary_2<::VROSC::WidgetSettings_Identifier,::UnityW<::VROSC::WidgetController>>* const& __cordl_internal_get__widgets() const;

constexpr ::System::Collections::Generic::Dictionary_2<::VROSC::WidgetSettings_Identifier,::UnityW<::VROSC::WidgetController>>*& __cordl_internal_get__widgets() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::WidgetController>>* const& __cordl_internal_get__widgetsPrefabs() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::WidgetController>>*& __cordl_internal_get__widgetsPrefabs() ;

constexpr void __cordl_internal_set__widgets(::System::Collections::Generic::Dictionary_2<::VROSC::WidgetSettings_Identifier,::UnityW<::VROSC::WidgetController>>*  value) ;

constexpr void __cordl_internal_set__widgetsPrefabs(::System::Collections::Generic::List_1<::UnityW<::VROSC::WidgetController>>*  value) ;

/// @brief Method .ctor, addr 0x1710884, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WidgetHub() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WidgetHub", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WidgetHub(WidgetHub && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WidgetHub", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WidgetHub(WidgetHub const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{883};

/// @brief Field _widgetsPrefabs, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::WidgetController>>*  ____widgetsPrefabs;

/// @brief Field _widgets, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::VROSC::WidgetSettings_Identifier,::UnityW<::VROSC::WidgetController>>*  ____widgets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::WidgetHub, ____widgetsPrefabs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::WidgetHub, ____widgets) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::WidgetHub, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::WidgetHub);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::WidgetHub*, "VROSC", "WidgetHub");
