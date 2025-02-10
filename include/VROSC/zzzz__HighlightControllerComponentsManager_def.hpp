#pragma once
// IWYU pragma private; include "VROSC/HighlightControllerComponentsManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HighlightControllerComponentsManager)
namespace System {
class Object;
}
namespace VROSC {
struct HandType;
}
namespace VROSC {
class HighlightControllerComponents;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class TooltipData;
}
// Forward declare root types
namespace VROSC {
class HighlightControllerComponentsManager;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::HighlightControllerComponentsManager);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.HighlightControllerComponentsManager
class CORDL_TYPE HighlightControllerComponentsManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _left, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__left, put=__cordl_internal_set__left)) ::UnityW<::VROSC::HighlightControllerComponents>  _left;

/// @brief Field _right, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__right, put=__cordl_internal_set__right)) ::UnityW<::VROSC::HighlightControllerComponents>  _right;

/// @brief Method IsLeftValid, addr 0x1734ddc, size 0x84, virtual false, abstract: false, final false
inline bool IsLeftValid(::VROSC::HandType  hand) ;

/// @brief Method IsRightValid, addr 0x1734e60, size 0x84, virtual false, abstract: false, final false
inline bool IsRightValid(::VROSC::HandType  hand) ;

static inline ::VROSC::HighlightControllerComponentsManager* New_ctor() ;

/// @brief Method SetActive, addr 0x17340dc, size 0x8c, virtual false, abstract: false, final false
inline void SetActive(::VROSC::TooltipData*  tooltip, ::VROSC::HandType  hand, bool  active, ::System::Object*  requester) ;

/// @brief Method Setup, addr 0x1734db4, size 0x28, virtual false, abstract: false, final false
inline void Setup(::VROSC::InputDevice*  left, ::VROSC::InputDevice*  right) ;

constexpr ::UnityW<::VROSC::HighlightControllerComponents> const& __cordl_internal_get__left() const;

constexpr ::UnityW<::VROSC::HighlightControllerComponents>& __cordl_internal_get__left() ;

constexpr ::UnityW<::VROSC::HighlightControllerComponents> const& __cordl_internal_get__right() const;

constexpr ::UnityW<::VROSC::HighlightControllerComponents>& __cordl_internal_get__right() ;

constexpr void __cordl_internal_set__left(::UnityW<::VROSC::HighlightControllerComponents>  value) ;

constexpr void __cordl_internal_set__right(::UnityW<::VROSC::HighlightControllerComponents>  value) ;

/// @brief Method .ctor, addr 0x1734ee4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HighlightControllerComponentsManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HighlightControllerComponentsManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HighlightControllerComponentsManager(HighlightControllerComponentsManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HighlightControllerComponentsManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HighlightControllerComponentsManager(HighlightControllerComponentsManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1076};

/// @brief Field _left, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::HighlightControllerComponents>  ____left;

/// @brief Field _right, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::HighlightControllerComponents>  ____right;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::HighlightControllerComponentsManager, ____left) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::HighlightControllerComponentsManager, ____right) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::HighlightControllerComponentsManager, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::HighlightControllerComponentsManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::HighlightControllerComponentsManager*, "VROSC", "HighlightControllerComponentsManager");
