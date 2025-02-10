#pragma once
// IWYU pragma private; include "VROSC/HelmRecorder.hpp"
#include "VROSC/zzzz__SourceRecorder_impl.hpp"
#include "VROSC/zzzz__HelmRecorder_def.hpp"
//  Writing Method size for method: ::VROSC::HelmRecorder.OnAudioFilterRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HelmRecorder::*)(::ArrayW<float_t,::Array<float_t>*>, int32_t)>(&::VROSC::HelmRecorder::OnAudioFilterRead)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x17ce2a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmRecorder*>::get(),
                        "OnAudioFilterRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HelmRecorder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HelmRecorder::*)()>(&::VROSC::HelmRecorder::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x17ce694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmRecorder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t,::Array<float_t>*>& VROSC::HelmRecorder::__cordl_internal_get__secondaryHelmData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondaryHelmData;
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& VROSC::HelmRecorder::__cordl_internal_get__secondaryHelmData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondaryHelmData;
}
constexpr void VROSC::HelmRecorder::__cordl_internal_set__secondaryHelmData(::ArrayW<float_t,::Array<float_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____secondaryHelmData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::HelmRecorder::OnAudioFilterRead(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmRecorder*>::get(),
                        "OnAudioFilterRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, channels);
}
inline void VROSC::HelmRecorder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HelmRecorder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::HelmRecorder* VROSC::HelmRecorder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::HelmRecorder*>());
}
// Ctor Parameters []
constexpr ::VROSC::HelmRecorder::HelmRecorder()   {
}
