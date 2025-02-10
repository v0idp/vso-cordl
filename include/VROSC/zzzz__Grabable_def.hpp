#pragma once
// IWYU pragma private; include "VROSC/Grabable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__Interactable_def.hpp"
CORDL_MODULE_EXPORT(Grabable)
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace VROSC {
class GrabData;
}
namespace VROSC {
class InputDevice;
}
// Forward declare root types
namespace VROSC {
class Grabable;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Grabable);
// Dependencies VROSC.Interactable
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Grabable
class CORDL_TYPE Grabable : public ::VROSC::Interactable {
public:
// Declarations
/// @brief Field OnGrab, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnGrab, put=setStaticF_OnGrab)) ::System::Action_2<::UnityW<::VROSC::InputDevice>,bool>*  OnGrab;

/// @brief Method Grab, addr 0x188fe60, size 0xb0, virtual true, abstract: false, final false
inline void Grab(::VROSC::GrabData*  grabData, bool  grabbing) ;

static inline ::VROSC::Grabable* New_ctor() ;

/// @brief Method .ctor, addr 0x188ff10, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_2<::UnityW<::VROSC::InputDevice>,bool>* getStaticF_OnGrab() ;

static inline void setStaticF_OnGrab(::System::Action_2<::UnityW<::VROSC::InputDevice>,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Grabable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Grabable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Grabable(Grabable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Grabable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Grabable(Grabable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{628};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::Grabable, 0x78>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::Grabable);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Grabable*, "VROSC", "Grabable");
