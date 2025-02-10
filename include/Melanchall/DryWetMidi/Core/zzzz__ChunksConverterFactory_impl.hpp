#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/ChunksConverterFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__ChunksConverterFactory_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__IChunksConverter_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiFileFormat_def.hpp"
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::ChunksConverterFactory.GetConverter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Melanchall::DryWetMidi::Core::IChunksConverter* (*)(::Melanchall::DryWetMidi::Core::MidiFileFormat)>(&::Melanchall::DryWetMidi::Core::ChunksConverterFactory::GetConverter)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x259d030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::ChunksConverterFactory*>::get(),
                        "GetConverter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiFileFormat>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::Melanchall::DryWetMidi::Core::IChunksConverter* Melanchall::DryWetMidi::Core::ChunksConverterFactory::GetConverter(::Melanchall::DryWetMidi::Core::MidiFileFormat  format)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::ChunksConverterFactory*>::get(),
                        "GetConverter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiFileFormat>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Melanchall::DryWetMidi::Core::IChunksConverter*, false>(nullptr, ___internal_method, format);
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Core::ChunksConverterFactory::ChunksConverterFactory()   {
}
