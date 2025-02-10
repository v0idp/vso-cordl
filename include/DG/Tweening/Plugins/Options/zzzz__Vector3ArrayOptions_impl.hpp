#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Options/Vector3ArrayOptions.hpp"
#include "DG/Tweening/Plugins/Options/zzzz__IPlugOptions_impl.hpp"
#include "DG/Tweening/zzzz__AxisConstraint_impl.hpp"
#include "DG/Tweening/Plugins/Options/zzzz__Vector3ArrayOptions_def.hpp"
//  Writing Method size for method: ::DG::Tweening::Plugins::Options::Vector3ArrayOptions.Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::Plugins::Options::Vector3ArrayOptions::*)()>(&::DG::Tweening::Plugins::Options::Vector3ArrayOptions::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18e08dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Options::Vector3ArrayOptions>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void DG::Tweening::Plugins::Options::Vector3ArrayOptions::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Options::Vector3ArrayOptions>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::DG::Tweening::Plugins::Options::IPlugOptions"
constexpr  DG::Tweening::Plugins::Options::Vector3ArrayOptions::operator ::DG::Tweening::Plugins::Options::IPlugOptions*()  {
return static_cast<::DG::Tweening::Plugins::Options::IPlugOptions*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::DG::Tweening::Plugins::Options::IPlugOptions"
constexpr ::DG::Tweening::Plugins::Options::IPlugOptions* DG::Tweening::Plugins::Options::Vector3ArrayOptions::i___DG__Tweening__Plugins__Options__IPlugOptions()  {
return static_cast<::DG::Tweening::Plugins::Options::IPlugOptions*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "axisConstraint", ty: "::DG::Tweening::AxisConstraint", modifiers: "", def_value: Some("{}") }, CppParam { name: "snapping", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "durations", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::DG::Tweening::Plugins::Options::Vector3ArrayOptions::Vector3ArrayOptions(::DG::Tweening::AxisConstraint  axisConstraint, bool  snapping, ::ArrayW<float_t,::Array<float_t>*>  durations) noexcept  {
this->axisConstraint = axisConstraint;
this->snapping = snapping;
this->durations = durations;
}
// Ctor Parameters []
constexpr ::DG::Tweening::Plugins::Options::Vector3ArrayOptions::Vector3ArrayOptions()   {
}
