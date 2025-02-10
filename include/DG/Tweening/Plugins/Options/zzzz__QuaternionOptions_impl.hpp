#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Options/QuaternionOptions.hpp"
#include "DG/Tweening/Plugins/Options/zzzz__IPlugOptions_impl.hpp"
#include "DG/Tweening/zzzz__AxisConstraint_impl.hpp"
#include "DG/Tweening/zzzz__RotateMode_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "DG/Tweening/Plugins/Options/zzzz__QuaternionOptions_def.hpp"
//  Writing Method size for method: ::DG::Tweening::Plugins::Options::QuaternionOptions.Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::Plugins::Options::QuaternionOptions::*)()>(&::DG::Tweening::Plugins::Options::QuaternionOptions::Reset)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x18e0878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Options::QuaternionOptions>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void DG::Tweening::Plugins::Options::QuaternionOptions::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Options::QuaternionOptions>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::DG::Tweening::Plugins::Options::IPlugOptions"
constexpr  DG::Tweening::Plugins::Options::QuaternionOptions::operator ::DG::Tweening::Plugins::Options::IPlugOptions*()  {
return static_cast<::DG::Tweening::Plugins::Options::IPlugOptions*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::DG::Tweening::Plugins::Options::IPlugOptions"
constexpr ::DG::Tweening::Plugins::Options::IPlugOptions* DG::Tweening::Plugins::Options::QuaternionOptions::i___DG__Tweening__Plugins__Options__IPlugOptions()  {
return static_cast<::DG::Tweening::Plugins::Options::IPlugOptions*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "rotateMode", ty: "::DG::Tweening::RotateMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "axisConstraint", ty: "::DG::Tweening::AxisConstraint", modifiers: "", def_value: Some("{}") }, CppParam { name: "up", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::DG::Tweening::Plugins::Options::QuaternionOptions::QuaternionOptions(::DG::Tweening::RotateMode  rotateMode, ::DG::Tweening::AxisConstraint  axisConstraint, ::UnityEngine::Vector3  up) noexcept  {
this->rotateMode = rotateMode;
this->axisConstraint = axisConstraint;
this->up = up;
}
// Ctor Parameters []
constexpr ::DG::Tweening::Plugins::Options::QuaternionOptions::QuaternionOptions()   {
}
