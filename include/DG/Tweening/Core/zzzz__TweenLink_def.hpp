#pragma once
// IWYU pragma private; include "DG/Tweening/Core/TweenLink.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/zzzz__LinkBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TweenLink)
namespace DG::Tweening {
struct LinkBehaviour;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace DG::Tweening::Core {
class TweenLink;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Core::TweenLink);
// Dependencies DG.Tweening.LinkBehaviour, System.Object
namespace DG::Tweening::Core {
// Is value type: false
// CS Name: DG.Tweening.Core.TweenLink
class CORDL_TYPE TweenLink : public ::System::Object {
public:
// Declarations
/// @brief Field behaviour, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_behaviour, put=__cordl_internal_set_behaviour)) ::DG::Tweening::LinkBehaviour  behaviour;

/// @brief Field lastSeenActive, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_lastSeenActive, put=__cordl_internal_set_lastSeenActive)) bool  lastSeenActive;

/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::GameObject>  target;

static inline ::DG::Tweening::Core::TweenLink* New_ctor(::UnityEngine::GameObject*  target, ::DG::Tweening::LinkBehaviour  behaviour) ;

constexpr ::DG::Tweening::LinkBehaviour const& __cordl_internal_get_behaviour() const;

constexpr ::DG::Tweening::LinkBehaviour& __cordl_internal_get_behaviour() ;

constexpr bool const& __cordl_internal_get_lastSeenActive() const;

constexpr bool& __cordl_internal_get_lastSeenActive() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_behaviour(::DG::Tweening::LinkBehaviour  value) ;

constexpr void __cordl_internal_set_lastSeenActive(bool  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x18e6330, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::GameObject*  target, ::DG::Tweening::LinkBehaviour  behaviour) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TweenLink() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TweenLink", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TweenLink(TweenLink && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TweenLink", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TweenLink(TweenLink const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10852};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___target;

/// @brief Field behaviour, offset: 0x18, size: 0x4, def value: None
 ::DG::Tweening::LinkBehaviour  ___behaviour;

/// @brief Field lastSeenActive, offset: 0x1c, size: 0x1, def value: None
 bool  ___lastSeenActive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Core::TweenLink, ___target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::TweenLink, ___behaviour) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::TweenLink, ___lastSeenActive) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Core::TweenLink, 0x20>, "Size mismatch!");

} // namespace end def DG::Tweening::Core
NEED_NO_BOX(::DG::Tweening::Core::TweenLink);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::TweenLink*, "DG.Tweening.Core", "TweenLink");
