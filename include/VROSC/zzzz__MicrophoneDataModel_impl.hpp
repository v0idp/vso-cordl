#pragma once
// IWYU pragma private; include "VROSC/MicrophoneDataModel.hpp"
#include "VROSC/zzzz__ToolDataModel_impl.hpp"
#include "VROSC/zzzz__MicrophoneDataModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::VROSC::MicrophoneDataModel.get_Key
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::MicrophoneDataModel::*)()>(&::VROSC::MicrophoneDataModel::get_Key)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1874700;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataModel*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDataModel.get_Version
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::MicrophoneDataModel::*)()>(&::VROSC::MicrophoneDataModel::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1874740;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataModel*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MicrophoneDataModel._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneDataModel::*)()>(&::VROSC::MicrophoneDataModel::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1873a34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& VROSC::MicrophoneDataModel::__cordl_internal_get_MicrophoneIsAttached()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MicrophoneIsAttached;
}
constexpr bool const& VROSC::MicrophoneDataModel::__cordl_internal_get_MicrophoneIsAttached() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MicrophoneIsAttached;
}
constexpr void VROSC::MicrophoneDataModel::__cordl_internal_set_MicrophoneIsAttached(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MicrophoneIsAttached = value;
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& VROSC::MicrophoneDataModel::__cordl_internal_get_MicrophonePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MicrophonePosition;
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& VROSC::MicrophoneDataModel::__cordl_internal_get_MicrophonePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MicrophonePosition;
}
constexpr void VROSC::MicrophoneDataModel::__cordl_internal_set_MicrophonePosition(::ArrayW<float_t,::Array<float_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MicrophonePosition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& VROSC::MicrophoneDataModel::__cordl_internal_get_MicrophoneRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MicrophoneRotation;
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& VROSC::MicrophoneDataModel::__cordl_internal_get_MicrophoneRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MicrophoneRotation;
}
constexpr void VROSC::MicrophoneDataModel::__cordl_internal_set_MicrophoneRotation(::ArrayW<float_t,::Array<float_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MicrophoneRotation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& VROSC::MicrophoneDataModel::__cordl_internal_get_MicrophoneScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MicrophoneScale;
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& VROSC::MicrophoneDataModel::__cordl_internal_get_MicrophoneScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MicrophoneScale;
}
constexpr void VROSC::MicrophoneDataModel::__cordl_internal_set_MicrophoneScale(::ArrayW<float_t,::Array<float_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MicrophoneScale)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& VROSC::MicrophoneDataModel::__cordl_internal_get_MicrophoneSpatialAnchorsUUIDs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MicrophoneSpatialAnchorsUUIDs;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& VROSC::MicrophoneDataModel::__cordl_internal_get_MicrophoneSpatialAnchorsUUIDs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MicrophoneSpatialAnchorsUUIDs;
}
constexpr void VROSC::MicrophoneDataModel::__cordl_internal_set_MicrophoneSpatialAnchorsUUIDs(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MicrophoneSpatialAnchorsUUIDs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::MicrophoneDataModel::__cordl_internal_get_PreampVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreampVolume;
}
constexpr float_t const& VROSC::MicrophoneDataModel::__cordl_internal_get_PreampVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreampVolume;
}
constexpr void VROSC::MicrophoneDataModel::__cordl_internal_set_PreampVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreampVolume = value;
}
constexpr float_t& VROSC::MicrophoneDataModel::__cordl_internal_get_PreampReverb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreampReverb;
}
constexpr float_t const& VROSC::MicrophoneDataModel::__cordl_internal_get_PreampReverb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreampReverb;
}
constexpr void VROSC::MicrophoneDataModel::__cordl_internal_set_PreampReverb(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreampReverb = value;
}
constexpr bool& VROSC::MicrophoneDataModel::__cordl_internal_get_UseProximity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseProximity;
}
constexpr bool const& VROSC::MicrophoneDataModel::__cordl_internal_get_UseProximity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseProximity;
}
constexpr void VROSC::MicrophoneDataModel::__cordl_internal_set_UseProximity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseProximity = value;
}
inline ::StringW VROSC::MicrophoneDataModel::get_Key()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataModel*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t VROSC::MicrophoneDataModel::get_Version()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataModel*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::MicrophoneDataModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::MicrophoneDataModel* VROSC::MicrophoneDataModel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::MicrophoneDataModel*>());
}
// Ctor Parameters []
constexpr ::VROSC::MicrophoneDataModel::MicrophoneDataModel()   {
}
