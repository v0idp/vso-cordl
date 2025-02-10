#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/TranslateEffect.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/AudioReactive/zzzz__CoroutineDrivenEffect_impl.hpp"
#include "VROSC/AudioReactive/zzzz__TranslateEffect_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "VROSC/AudioReactive/zzzz__TranslateEffectData_def.hpp"
#include "VROSC/AudioReactive/zzzz__TranslateEffect_def.hpp"
//  Writing Method size for method: ::VROSC::AudioReactive::TranslateEffect_TranslateData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::TranslateEffect_TranslateData::*)(::UnityEngine::Transform*, ::VROSC::AudioReactive::TranslateEffectData*)>(&::VROSC::AudioReactive::TranslateEffect_TranslateData::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x17d7e04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TranslateEffect_TranslateData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AudioReactive::TranslateEffectData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::TranslateEffect_TranslateData.Lerp
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::TranslateEffect_TranslateData::*)(float_t)>(&::VROSC::AudioReactive::TranslateEffect_TranslateData::Lerp)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x17d7eb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TranslateEffect_TranslateData*>::get(),
                        "Lerp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::AudioReactive::TranslateEffect_TranslateData::__cordl_internal_get__transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::AudioReactive::TranslateEffect_TranslateData::__cordl_internal_get__transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transform;
}
constexpr void VROSC::AudioReactive::TranslateEffect_TranslateData::__cordl_internal_set__transform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& VROSC::AudioReactive::TranslateEffect_TranslateData::__cordl_internal_get__startPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startPosition;
}
constexpr ::UnityEngine::Vector3 const& VROSC::AudioReactive::TranslateEffect_TranslateData::__cordl_internal_get__startPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startPosition;
}
constexpr void VROSC::AudioReactive::TranslateEffect_TranslateData::__cordl_internal_set__startPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startPosition = value;
}
constexpr ::UnityEngine::Vector3& VROSC::AudioReactive::TranslateEffect_TranslateData::__cordl_internal_get__endPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endPosition;
}
constexpr ::UnityEngine::Vector3 const& VROSC::AudioReactive::TranslateEffect_TranslateData::__cordl_internal_get__endPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endPosition;
}
constexpr void VROSC::AudioReactive::TranslateEffect_TranslateData::__cordl_internal_set__endPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____endPosition = value;
}
constexpr bool& VROSC::AudioReactive::TranslateEffect_TranslateData::__cordl_internal_get__local()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____local;
}
constexpr bool const& VROSC::AudioReactive::TranslateEffect_TranslateData::__cordl_internal_get__local() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____local;
}
constexpr void VROSC::AudioReactive::TranslateEffect_TranslateData::__cordl_internal_set__local(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____local = value;
}
inline void VROSC::AudioReactive::TranslateEffect_TranslateData::_ctor(::UnityEngine::Transform*  transform, ::VROSC::AudioReactive::TranslateEffectData*  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TranslateEffect_TranslateData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AudioReactive::TranslateEffectData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transform, data);
}
inline void VROSC::AudioReactive::TranslateEffect_TranslateData::Lerp(float_t  amount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TranslateEffect_TranslateData*>::get(),
                        "Lerp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, amount);
}
inline ::VROSC::AudioReactive::TranslateEffect_TranslateData* VROSC::AudioReactive::TranslateEffect_TranslateData::New_ctor(::UnityEngine::Transform*  transform, ::VROSC::AudioReactive::TranslateEffectData*  data)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AudioReactive::TranslateEffect_TranslateData*>(transform, data));
}
// Ctor Parameters []
constexpr ::VROSC::AudioReactive::TranslateEffect_TranslateData::TranslateEffect_TranslateData()   {
}
//  Writing Method size for method: ::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::*)(int32_t)>(&::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x17d7cb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::*)()>(&::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17d7f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::*)()>(&::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x17d7f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::*)()>(&::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d806c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::*)()>(&::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x17d8074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::*)()>(&::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d80ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::AudioReactive::TranslateEffect*& VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::VROSC::AudioReactive::TranslateEffect* const& VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::__cordl_internal_set___4__this(::VROSC::AudioReactive::TranslateEffect*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::__cordl_internal_get__time_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____time_5__2;
}
constexpr float_t const& VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::__cordl_internal_get__time_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____time_5__2;
}
constexpr void VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::__cordl_internal_set__time_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____time_5__2 = value;
}
constexpr ::ArrayW<::VROSC::AudioReactive::TranslateEffect_TranslateData*,::Array<::VROSC::AudioReactive::TranslateEffect_TranslateData*>*>& VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::__cordl_internal_get__translateDatas_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____translateDatas_5__3;
}
constexpr ::ArrayW<::VROSC::AudioReactive::TranslateEffect_TranslateData*,::Array<::VROSC::AudioReactive::TranslateEffect_TranslateData*>*> const& VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::__cordl_internal_get__translateDatas_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____translateDatas_5__3;
}
constexpr void VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::__cordl_internal_set__translateDatas_5__3(::ArrayW<::VROSC::AudioReactive::TranslateEffect_TranslateData*,::Array<::VROSC::AudioReactive::TranslateEffect_TranslateData*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____translateDatas_5__3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6* VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VROSC::AudioReactive::TranslateEffect__SpecificFlow_d__6::TranslateEffect__SpecificFlow_d__6()   {
}
//  Writing Method size for method: ::VROSC::AudioReactive::TranslateEffect.get_Data
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::AudioReactive::TranslateEffectData> (::VROSC::AudioReactive::TranslateEffect::*)()>(&::VROSC::AudioReactive::TranslateEffect::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d7c48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TranslateEffect*>::get(),
                        "get_Data",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::TranslateEffect.get_Transforms
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*> (::VROSC::AudioReactive::TranslateEffect::*)()>(&::VROSC::AudioReactive::TranslateEffect::get_Transforms)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d7c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TranslateEffect*>::get(),
                        "get_Transforms",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::TranslateEffect.SpecificFlow
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::VROSC::AudioReactive::TranslateEffect::*)()>(&::VROSC::AudioReactive::TranslateEffect::SpecificFlow)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x17d7c58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TranslateEffect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TranslateEffect*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::TranslateEffect.GetTranslationDatas
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::VROSC::AudioReactive::TranslateEffect_TranslateData*,::Array<::VROSC::AudioReactive::TranslateEffect_TranslateData*>*> (::VROSC::AudioReactive::TranslateEffect::*)()>(&::VROSC::AudioReactive::TranslateEffect::GetTranslationDatas)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x17d7ce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TranslateEffect*>::get(),
                        "GetTranslationDatas",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::TranslateEffect._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::TranslateEffect::*)()>(&::VROSC::AudioReactive::TranslateEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d7ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TranslateEffect*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::AudioReactive::TranslateEffectData>& VROSC::AudioReactive::TranslateEffect::__cordl_internal_get__data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr ::UnityW<::VROSC::AudioReactive::TranslateEffectData> const& VROSC::AudioReactive::TranslateEffect::__cordl_internal_get__data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr void VROSC::AudioReactive::TranslateEffect::__cordl_internal_set__data(::UnityW<::VROSC::AudioReactive::TranslateEffectData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>& VROSC::AudioReactive::TranslateEffect::__cordl_internal_get__transforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*> const& VROSC::AudioReactive::TranslateEffect::__cordl_internal_get__transforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transforms;
}
constexpr void VROSC::AudioReactive::TranslateEffect::__cordl_internal_set__transforms(::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::VROSC::AudioReactive::TranslateEffectData> VROSC::AudioReactive::TranslateEffect::get_Data()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TranslateEffect*>::get(),
                        "get_Data",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::AudioReactive::TranslateEffectData>, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*> VROSC::AudioReactive::TranslateEffect::get_Transforms()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TranslateEffect*>::get(),
                        "get_Transforms",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* VROSC::AudioReactive::TranslateEffect::SpecificFlow()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TranslateEffect*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::ArrayW<::VROSC::AudioReactive::TranslateEffect_TranslateData*,::Array<::VROSC::AudioReactive::TranslateEffect_TranslateData*>*> VROSC::AudioReactive::TranslateEffect::GetTranslationDatas()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TranslateEffect*>::get(),
                        "GetTranslationDatas",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::VROSC::AudioReactive::TranslateEffect_TranslateData*,::Array<::VROSC::AudioReactive::TranslateEffect_TranslateData*>*>, false>(this, ___internal_method);
}
inline void VROSC::AudioReactive::TranslateEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TranslateEffect*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AudioReactive::TranslateEffect* VROSC::AudioReactive::TranslateEffect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AudioReactive::TranslateEffect*>());
}
// Ctor Parameters []
constexpr ::VROSC::AudioReactive::TranslateEffect::TranslateEffect()   {
}
