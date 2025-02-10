#pragma once
// IWYU pragma private; include "DG/Tweening/Core/Extensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Extensions)
namespace DG::Tweening::Core::Enums {
struct SpecialStartupMode;
}
namespace DG::Tweening::Core {
template<typename T1,typename T2,typename TPlugOptions>
class TweenerCore_3;
}
// Forward declare root types
namespace DG::Tweening::Core {
class Extensions;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Core::Extensions);
// Dependencies System.Object
namespace DG::Tweening::Core {
// Is value type: false
// CS Name: DG.Tweening.Core.Extensions
class CORDL_TYPE Extensions : public ::System::Object {
public:
// Declarations
/// @brief Method Blendable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename TPlugOptions>
static inline ::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>* Blendable(::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*  t) ;

/// @brief Method NoFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename TPlugOptions>
static inline ::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>* NoFrom(::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*  t) ;

/// @brief Method SetSpecialStartupMode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T SetSpecialStartupMode(T  t, ::DG::Tweening::Core::Enums::SpecialStartupMode  mode) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Extensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Extensions(Extensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Extensions(Extensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10847};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::Core::Extensions, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening::Core
NEED_NO_BOX(::DG::Tweening::Core::Extensions);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::Extensions*, "DG.Tweening.Core", "Extensions");
