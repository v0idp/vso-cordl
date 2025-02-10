#pragma once
// IWYU pragma private; include "VROSC/MixerGroupRecorder.hpp"
#include "VROSC/zzzz__SourceRecorder_impl.hpp"
#include "VROSC/zzzz__MixerGroupRecorder_def.hpp"
//  Writing Method size for method: ::VROSC::MixerGroupRecorder.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MixerGroupRecorder::*)(int32_t)>(&::VROSC::MixerGroupRecorder::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17cdc48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MixerGroupRecorder*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MixerGroupRecorder.OnAudioFilterRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MixerGroupRecorder::*)(::ArrayW<float_t,::Array<float_t>*>, int32_t)>(&::VROSC::MixerGroupRecorder::OnAudioFilterRead)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x17cf5b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MixerGroupRecorder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MixerGroupRecorder*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MixerGroupRecorder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MixerGroupRecorder::*)()>(&::VROSC::MixerGroupRecorder::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x17cf674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MixerGroupRecorder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t,::Array<float_t>*>& VROSC::MixerGroupRecorder::__cordl_internal_get__mixerGroupData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mixerGroupData;
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& VROSC::MixerGroupRecorder::__cordl_internal_get__mixerGroupData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mixerGroupData;
}
constexpr void VROSC::MixerGroupRecorder::__cordl_internal_set__mixerGroupData(::ArrayW<float_t,::Array<float_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mixerGroupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::MixerGroupRecorder::__cordl_internal_get__routingChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____routingChannel;
}
constexpr int32_t const& VROSC::MixerGroupRecorder::__cordl_internal_get__routingChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____routingChannel;
}
constexpr void VROSC::MixerGroupRecorder::__cordl_internal_set__routingChannel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____routingChannel = value;
}
inline void VROSC::MixerGroupRecorder::Setup(int32_t  channel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MixerGroupRecorder*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, channel);
}
inline void VROSC::MixerGroupRecorder::OnAudioFilterRead(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  channels)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MixerGroupRecorder*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, channels);
}
inline void VROSC::MixerGroupRecorder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MixerGroupRecorder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::MixerGroupRecorder* VROSC::MixerGroupRecorder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::MixerGroupRecorder*>());
}
// Ctor Parameters []
constexpr ::VROSC::MixerGroupRecorder::MixerGroupRecorder()   {
}
