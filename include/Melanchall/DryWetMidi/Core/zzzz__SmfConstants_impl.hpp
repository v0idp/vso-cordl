#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/SmfConstants.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__SmfConstants_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::SmfConstants.get_DefaultTextEncoding
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)()>(&::Melanchall::DryWetMidi::Core::SmfConstants::get_DefaultTextEncoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a4aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SmfConstants*>::get(),
                        "get_DefaultTextEncoding",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::System::Text::Encoding* Melanchall::DryWetMidi::Core::SmfConstants::get_DefaultTextEncoding()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SmfConstants*>::get(),
                        "get_DefaultTextEncoding",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Core::SmfConstants::SmfConstants()   {
}
