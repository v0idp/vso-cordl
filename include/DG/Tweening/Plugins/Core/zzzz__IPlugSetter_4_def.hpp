#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Core/IPlugSetter_4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPlugSetter_4)
namespace DG::Tweening::Core {
template<typename T>
class DOGetter_1;
}
namespace DG::Tweening::Core {
template<typename T>
class DOSetter_1;
}
// Forward declare root types
namespace DG::Tweening::Plugins::Core {
template<typename T1,typename T2,typename TPlugin,typename TPlugOptions>
class IPlugSetter_4;
}
// Write type traits
MARK_GEN_REF_PTR_T(::DG::Tweening::Plugins::Core::IPlugSetter_4);
// Dependencies 
namespace DG::Tweening::Plugins::Core {
// cpp template
template<typename T1,typename T2,typename TPlugin,typename TPlugOptions>
// Is value type: false
// CS Name: DG.Tweening.Plugins.Core.IPlugSetter`4<T1,T2,TPlugin,TPlugOptions>
class CORDL_TYPE IPlugSetter_4 {
public:
// Declarations
/// @brief Method EndValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline T2 EndValue() ;

/// @brief Method GetOptions, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TPlugOptions GetOptions() ;

/// @brief Method Getter, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::DG::Tweening::Core::DOGetter_1<T1>* Getter() ;

/// @brief Method Setter, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::DG::Tweening::Core::DOSetter_1<T1>* Setter() ;

// Ctor Parameters [CppParam { name: "", ty: "IPlugSetter_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPlugSetter_4(IPlugSetter_4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10821};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def DG::Tweening::Plugins::Core
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::DG::Tweening::Plugins::Core::IPlugSetter_4, "DG.Tweening.Plugins.Core", "IPlugSetter`4");
