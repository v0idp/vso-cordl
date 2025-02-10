#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/IChunksConverter.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__IChunksConverter_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiChunk_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::IChunksConverter.Convert
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiChunk*>* (::Melanchall::DryWetMidi::Core::IChunksConverter::*)(::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiChunk*>*)>(&::Melanchall::DryWetMidi::Core::IChunksConverter::Convert)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::IChunksConverter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::IChunksConverter*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiChunk*>* Melanchall::DryWetMidi::Core::IChunksConverter::Convert(::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiChunk*>*  chunks)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::IChunksConverter*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiChunk*>*, false>(this, ___internal_method, chunks);
}
