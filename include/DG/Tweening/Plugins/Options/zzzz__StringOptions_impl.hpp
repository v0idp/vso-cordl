#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Options/StringOptions.hpp"
#include "DG/Tweening/Plugins/Options/zzzz__IPlugOptions_impl.hpp"
#include "DG/Tweening/zzzz__ScrambleMode_impl.hpp"
#include "DG/Tweening/Plugins/Options/zzzz__StringOptions_def.hpp"
//  Writing Method size for method: ::DG::Tweening::Plugins::Options::StringOptions.Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::Plugins::Options::StringOptions::*)()>(&::DG::Tweening::Plugins::Options::StringOptions::Reset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x18e0908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Options::StringOptions>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void DG::Tweening::Plugins::Options::StringOptions::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Options::StringOptions>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::DG::Tweening::Plugins::Options::IPlugOptions"
constexpr  DG::Tweening::Plugins::Options::StringOptions::operator ::DG::Tweening::Plugins::Options::IPlugOptions*()  {
return static_cast<::DG::Tweening::Plugins::Options::IPlugOptions*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::DG::Tweening::Plugins::Options::IPlugOptions"
constexpr ::DG::Tweening::Plugins::Options::IPlugOptions* DG::Tweening::Plugins::Options::StringOptions::i___DG__Tweening__Plugins__Options__IPlugOptions()  {
return static_cast<::DG::Tweening::Plugins::Options::IPlugOptions*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "richTextEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "scrambleMode", ty: "::DG::Tweening::ScrambleMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "scrambledChars", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "startValueStrippedLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "changeValueStrippedLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::DG::Tweening::Plugins::Options::StringOptions::StringOptions(bool  richTextEnabled, ::DG::Tweening::ScrambleMode  scrambleMode, ::ArrayW<char16_t,::Array<char16_t>*>  scrambledChars, int32_t  startValueStrippedLength, int32_t  changeValueStrippedLength) noexcept  {
this->richTextEnabled = richTextEnabled;
this->scrambleMode = scrambleMode;
this->scrambledChars = scrambledChars;
this->startValueStrippedLength = startValueStrippedLength;
this->changeValueStrippedLength = changeValueStrippedLength;
}
// Ctor Parameters []
constexpr ::DG::Tweening::Plugins::Options::StringOptions::StringOptions()   {
}
