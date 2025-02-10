#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Options/UintOptions.hpp"
#include "DG/Tweening/Plugins/Options/zzzz__IPlugOptions_impl.hpp"
#include "DG/Tweening/Plugins/Options/zzzz__UintOptions_def.hpp"
//  Writing Method size for method: ::DG::Tweening::Plugins::Options::UintOptions.Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::Plugins::Options::UintOptions::*)()>(&::DG::Tweening::Plugins::Options::UintOptions::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18e08d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Options::UintOptions>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void DG::Tweening::Plugins::Options::UintOptions::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Options::UintOptions>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::DG::Tweening::Plugins::Options::IPlugOptions"
constexpr  DG::Tweening::Plugins::Options::UintOptions::operator ::DG::Tweening::Plugins::Options::IPlugOptions*()  {
return static_cast<::DG::Tweening::Plugins::Options::IPlugOptions*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::DG::Tweening::Plugins::Options::IPlugOptions"
constexpr ::DG::Tweening::Plugins::Options::IPlugOptions* DG::Tweening::Plugins::Options::UintOptions::i___DG__Tweening__Plugins__Options__IPlugOptions()  {
return static_cast<::DG::Tweening::Plugins::Options::IPlugOptions*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "isNegativeChangeValue", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::DG::Tweening::Plugins::Options::UintOptions::UintOptions(bool  isNegativeChangeValue) noexcept  {
this->isNegativeChangeValue = isNegativeChangeValue;
}
// Ctor Parameters []
constexpr ::DG::Tweening::Plugins::Options::UintOptions::UintOptions()   {
}
